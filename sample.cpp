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
  int count = 0, p = a[n - 1], l = 1, j = n - 2;

  while (j >= 0)
  {
    while (j >= 0 && a[j] == p)
    {
      l++;
      j--;
    }
    if (j < 0)
      break;
    count++;
    j -= l;
    l *= 2;
  }
  cout << count << "\n";
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
