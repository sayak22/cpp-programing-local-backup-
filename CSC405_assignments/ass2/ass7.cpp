#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter array size :: ";
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> o, e;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)

            e.push_back(a[i]);
        else
            o.push_back(a[i]);
    }
    cout << "\nEven elements :: ";

    for (int i = 0; i < e.size(); i++)
    {
        cout << e[i] << " ";
    }
    cout << "\nOdd elements :: ";
    for (int i = 0; i < o.size(); i++)
    {
        cout << o[i] << " ";
    }

    return 0;
}
