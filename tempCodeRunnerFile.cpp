#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, sum = 0, cs = 0, ts = 0;
        cin >> n >> k;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);

        int index = n - 1, count = 1;

        while (k--)
        {
            if (k > 1)
            {
                if (count % 2 == 1)
                    cs += a[index--];
                else
                    ts += a[index--];
            }
            else
            {
                ts = a[index--] + a[index--];
                cs = a[index];
                break;
            }
            count++;
        }
        if (cs > ts)
            cout << cs << endl;
        else
            cout << ts << end;
    }
    return 0;
}