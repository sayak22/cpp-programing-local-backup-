// Sayak Mondal/20155
#include <iostream>
#define pi 3.14

using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout << "Enter radius :: ";
    cin >> a;
    cout << "circumference :: " << 2 * pi * a << "\narea :: " << pi * a * a;
    return 0;
}
