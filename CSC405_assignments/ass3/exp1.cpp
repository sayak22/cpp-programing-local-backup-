// Sayak Mondal / 20155
#include <bits/stdc++.h>
using namespace std;
void getOddOccurrence(int arr[], int arr_size)
{
    int flag = 0;
    for (int i = 0; i < arr_size; i++)
    {
        int count = 0;
        for (int j = 0; j < arr_size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0)
        {
            flag = 1;
            cout << arr[i] << " ";
        }
    }
    if (flag == 0)
        cout << "No element is present odd number of times";
}

int main()
{
    int n;
    cout << "Enter number of elements :: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements :: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    getOddOccurrence(arr, n);
    return 0;
}
