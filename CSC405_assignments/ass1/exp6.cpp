// Sayak Mondal/20155
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter 2 integers :: ";
    cin >> a >> b;
    cout << "(a+b)^2 = " << pow(a + b, 2) << "\n(a-b)^2 = " << pow(a - b, 2);
    return 0;
}
