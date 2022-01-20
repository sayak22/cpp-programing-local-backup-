#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back

string solve()
{
  string n;
  cin >> n;
  int l = n.length();
  int i = 0;
  string mx = "";

  if (l == 2) // for 2 digit numbers
  {
    int sum = n[0] + n[1] - 96;
    return to_string(sum);
  }

  int ind, flag = 0;
  while (i < l - 1) // for rest
  {
    if ((n[i] + n[i + 1] - 96) > 9)
    {
      flag = 1;
      ind = i;
    }
    i++;
  }

  if (flag == 1)
  {
    mx = n.substr(0, ind);
    int sum = n[ind] + n[ind + 1] - 96;
    mx.append(to_string(sum));
    mx.append(n.substr(ind + 2, l - ind - 2));
  }
  else
  {
    int sum = n[0] + n[1] - 96;
    // mx = n.substr(0, ind);
    mx.append(to_string(sum));
    mx.append(n.substr(2, l - 2));
  }

  return mx;
}

int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    cout << solve() << "\n";
  }
  return 0;
}