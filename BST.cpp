#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
//Function to find minimum in a tree.
Node *FindMin(Node *root)
{
    while (root->left != NULL)
        root = root->left;
    return root;
}

// Searching
struct Node *Search(Node *root, int key)
{
    if (root == NULL || root->data == key)
        return root;

    if (root->data > key)
        return Search(root->left, key);

    else
        return Search(root->right, key);
}

// Function to delete a value from tree.
struct Node *Delete(struct Node *root, int data)
{
    if (root == NULL)
        return root;
    else if (data < root->data)
        root->left = Delete(root->left, data);
    else if (data > root->data)
        root->right = Delete(root->right, data);
    else
    {
        // Case 1:  No child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        //Case 2: One child
        else if (root->left == NULL)
        {
            struct Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            struct Node *temp = root;
            root = root->left;
            delete temp;
        }
        // case 3: 2 children
        else
        {
            struct Node *temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}

//Function to visit nodes in Inorder
void Inorder(Node *root)
{
    if (root == NULL)
        return;

    Inorder(root->left);       //Visit left subtree
    printf("%d ", root->data); //Print data
    Inorder(root->right);      // Visit right subtree
}

// Function to Insert Node in a Binary Search Tree
Node *Insert(Node *root, char data)
{
    if (root == NULL)
    {
        root = new Node();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if (data <= root->data)
        root->left = Insert(root->left, data);
    else
        root->right = Insert(root->right, data);
    return root;
}

int main()
{
    /*example tree
	            5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
    Node *root = NULL;
    do
    {
        int ch;
        cout << "\n\n1 - Insertion\n2 - search\n3 - deletion\n4 - Inorder traversal\nPress any other key to EXIT\n\nEnter Your choice :: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nEnter data of node :: ";
            int data;
            cin >> data;
            root = Insert(root, data);
            break;
        case 2:
            cout << "\nEnter Element for search :: ";
            int key;
            cin >> key;
            if (Search(root, key) == NULL)
                cout << "\nDOES NOT EXIST";
            else
                cout << "\nKEY EXISTS";
            break;
        case 3:
            cout << "Enter element to be deleted :: ";
            int keydel;
            cin >> keydel;
            Delete(root, keydel);
            cout << "\nInorder traversal after deletion: ";
            Inorder(root);
            cout << "\n";
            break;
        case 4:
            cout << "\nInorder: ";
            Inorder(root);
            cout << "\n";
            cout << endl;
            break;
        default:
            return 0;
        }
    } while (1);
}