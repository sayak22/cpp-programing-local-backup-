#include <bits/stdc++.h>
using namespace std;

int q[100], n = 100, front = -1, rear = -1;

void Insert()
{
    int val;
    if (rear == n - 1)
        cout << "\nQueue Overflow\n";
    else
    {
        if (front == -1)
            front = 0;
        cout << "\nInsert the element in queue :: ";
        cin >> val;
        rear++;
        q[rear] = val;
    }
}
void Delete()
{4
    if (front == -1 || front > rear)
    {
        cout << "\nQUEUE UNDERFLOW\n ";
        return;
    }
    else
        cout << "\nELEMENT DELETED FROM THE QUEUE IS : " << q[front] << "\n";
        front++;
}
void Display()
{
    if (front == -1 || front > rear)
        cout << "QUEUE IS EMPTY\n"
             << endl;
    else
    {
        cout << "QUEUE ELEMENTS ARE : ";
        for (int i = front; i <= rear; i++)
            cout << q[i] << " ";
        cout << "\n";
    }
}

int main()
{
    int ch;
    do
    {
        cout << "\n1) Insert element to queue" << endl;
        cout << "2) Delete element from queue" << endl;
        cout << "3) Display all the elements of queue" << endl;
        cout << "Press any other key to Exit" << endl;
        cout << "\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        default:
            return 0;
        }
    } while (1);
    return 0;
}
