#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back

int solve()
{
    string n;
    int l, k, x = 0;
    cin >> l >> k;
    cin >> n;
    for (int i = 0; i < l / 2; i++)
    {
        if (n[i] != n[l - 1 - i])
            x++;
    }

    if (x == k)
        return 0;
    else if (x > k)
        return x - k;
    else
        return k - x;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, j = 1;
    cin >> t;
    while (j <= t)
    {
        cout << "Case #" << j << ": " << solve() << endl;
        j++;
    }
    return 0;
}