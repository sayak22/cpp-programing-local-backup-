#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define fr(i, a, b) for (int i = a; i < b; i++)
#define en cout << endl
#define mp make_pair

int solve()
{
    int n;
    cin >> n;
    int a[n];
    fr(i, 0, n) cin >> a[i];
    int key = a[n - 1], count = 0, range = 1, c = 0, start = n - 2;
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] == key)
            range++;
        else
        {
            start = i;
            break;
        }
    }

    for (int i = start; i >= 0; i--)
    {
        if (a[i] != key)
        {
            count++;
        }
        else if (count != 0 && count < range)
        {
            range += (n - range) - i;
            count = 0;
            c++;
        }
        if (count == range)
        {
            count = 0;
            range *= 2;
            c++;
        }
    }
    cout << c;
    en;
    return 0;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}