// Sayak Mondal/20155
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    char ch;
    cout << "1- celcius to farenhiet\n2- farenhiet to celcius\nEnter choice :: ";
    cin >> ch;
    cout << "Enter temperature = ";
    cin >> t;
    if (ch == '1')
        cout << "temperature in farenheit = " << 9 * (t / 5) + 32;
    else
        cout << "temperature in celcius = " << 5 * (t - 32) / 9;
    return 0;
}
