#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root;

// Insertion
node *create()
{
node *p;
int x;
cout<<"Enter data(-1 for no data):";
cin>>x;
if(x==-1)
return NULL;
p=(node*)malloc(sizeof(node));
p->data=x;
cout<<"Enter left child of %d:\n",x;
p->left=create();
cout<<"Enter right child of %d:\n",x;
p->right=create();
return p;
}
// New node creation
struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

// Traverse Preorder
void traversePreOrder(struct node *temp)
{
    if (temp != NULL)
    {
        cout << " " << temp->data;
        traversePreOrder(temp->left);
        traversePreOrder(temp->right);
    }
}

// Traverse Inorder
void traverseInOrder(struct node *temp)
{
    if (temp != NULL)
    {
        traverseInOrder(temp->left);
        cout << " " << temp->data;
        traverseInOrder(temp->right);
    }
}

// Traverse Postorder
void traversePostOrder(struct node *temp)
{
    if (temp != NULL)
    {
        traversePostOrder(temp->left);
        traversePostOrder(temp->right);
        cout << " " << temp->data;
    }
}

int main()
{
    do
    {
        cout<<"\nDo you want to insert more?(y,n)";
        char ch;
        cin>>ch;
        if (ch == 'n' || ch == 'N')
            break;
        root=create();
    } while (1);

    cout << "preorder traversal: ";
    traversePreOrder(root);
    cout << "\nInorder traversal: ";
    traverseInOrder(root);
    cout << "\nPostorder traversal: ";
    traversePostOrder(root);
}