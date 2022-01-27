// Sayak Mondal/20155
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[5], sum = 0;
    cout << "Enter 5 numbers :: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << "sum = " << sum << "\naverage = " << sum / 5.0;
    return 0;
}
