// Sayak Mondal / 20155
#include <iostream>
using namespace std;

inline int Largest(int a, int b)
{
    int r;
    r = (a > b) ? a : b;
    return r;
}

int main()
{
    int a, b;
    cout << "\nEnter 1st number :: ";
    cin >> a;
    cout << "\nEnter 2nd number :: ";
    cin >> b;
    cout << "\nLargest of two numbers [ " << a << ", " << b << " ] is :: " << Largest(a, b) << "\n";
}
