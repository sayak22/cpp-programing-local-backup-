#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter 3 numbers :: ";
    int a, b, c;
    cin >> a >> b >> c;
    cout << "Maximum number = " << max(a, max(b, c));
    return 0;
}
