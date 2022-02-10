// Sayak Mondal / 20155
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100], a[100], d[100];
    int size, i, j, temp;
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements in array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
        a[i] = d[i] = arr[i];
    }
    for (i = 0; i < size; i++)
        for (j = i + 1; j < size; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    for (i = 0; i < size; i++)
        for (j = i + 1; j < size; j++)
        {
            if (d[j] > d[i])
            {
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    cout << "Elements of array in sorted ascending and descending order::" << endl;
    for (i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
    for (i = 0; i < size; i++)
        cout << d[i] << " ";
    return 0;
}
