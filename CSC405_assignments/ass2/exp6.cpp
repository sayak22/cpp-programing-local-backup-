#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter a number :: ";
    int a;
    cin >> a;
    int n = 0;
    while (a != 0)
    {
        int r = a % 10;
        n = (n * 10) + r;
        a /= 10;
    }
    cout << "Reversed number :: " << n;

    return 0;
}
