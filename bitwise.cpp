#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
    cin >> n;
    int a[n], s=0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        s = (a[i] & a[j]) ^ (a[i] | a[j]);
        cout<<"for i = "<<i<< " and j = "<<j<<" s = "<<s<<endl;
      }
    }
    return 0;
}