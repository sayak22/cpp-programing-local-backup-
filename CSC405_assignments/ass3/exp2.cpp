// Sayak Mondal / 20155
#include <bits/stdc++.h>
using namespace std;
void swapbyreference(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
int main()
{
    int a, b;
    cout << "Enter 2 numbers :: ";
    cin >> a >> b;
    cout << "\n Before swapping"
         << "\n A = " << a << "\n B = " << b << endl;
    swapbyreference(a, b);
    cout << "\n After swapping"
         << "\n A = " << a << "\n B = " << b << endl;
    return 0;
}
