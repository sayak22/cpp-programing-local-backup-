#include <bits/stdc++.h>
using namespace std;

int traverse(int *a, int *n)
{
    cout << "\nElements of the array are :: ";
    for (int i = 0; i < *n; i++)
        cout << a[i] << " ";
    cout << "\n";
    return 0;
}

int insert(int *a, int *n)
{
    cout << "\nEnter the number :: ";
    int num;
    cin >> num;
    a[*n] = num;
    cout << "Operation succesful!";
    return *n + 1;
}

int Delete(int *a, int *n)
{
    cout << "\nEnter the index :: ";
    int in;
    cin >> in;
    for (int i = in; i < *n - 1; i++)
        a[i] = a[i + 1];
    cout << "Operation succesful!";
    return *n - 1;
}

int Search(int *a, int *n)
{
    cout << "\nEnter the number :: ";
    int num;
    cin >> num;
    for (int i = 0; i < *n; i++)
        if (a[i] == num)
        {
            cout << "NUMBER IS AT INDEX " << i;
            return 0;
        }
    cout << "NUMBER NOT FOUND!!";
    return 0;
}

int update(int *a, int *n)
{
    cout << "\nEnter the position of updation :: ";
    int pos;
    cin >> pos;
    cout << "\nEnter the number to be updated :: ";
    int num;
    cin >> num;
    for (int i = 0; i < *n; i++)
    {
        if (i == pos)
            a[i] = num;
    }
    cout << "\nOperation succesful!\n";
    return 0;
}

int main()
{
    int n;
    cout << "ENTER THE SIZE OF THE ARRAY :: ";
    cin >> n;
    cout << "ENTER THE ELEMENTS OF THE ARRAY :: ";
    int a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    while (1)
    {
        cout << "\n\n1 - TRAVERSE\n2 - INSERT\n3 - DELETE\n4 - SEARCH\n5 - UPDATE \nPRESS ANY OTHER KEY TO DISPLAY ARRAY AND EXIT\nENTER YOUR CHOICE :: ";
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
            traverse(a, &n);
            break;
        case 2:
            n = insert(a, &n);
            break;
        case 3:
            n = Delete(a, &n);
            break;
        case 4:
            Search(a, &n);
            break;
        case 5:
            update(a, &n);
            break;
        default:
            traverse(a, &n);
            cout << "PROGRAM ENDING . . . ";
            return 0;
        }
    }
    return 0;
}