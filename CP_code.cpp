#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back

int solve()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                cout << abs(2 - i) + abs(2 - j) << endl;
                return 0;
            }
        }

    return 0;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}