// Sayak Mondal / 20155
#include <bits/stdc++.h>
using namespace std;

void area(int r)
{
    cout << 3.14 * r * r;
}

void area(int b, int h)
{
    cout << 0.5 * b * h;
}

int main(int argc, char const *argv[])
{
    int ch, r, h, b;
    cout << "1 - Area of circle\n2 - Area of triangle\nEnter your choice :: ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Enter radius :: ";
        cin >> r;
        area(r);
        break;
    case 2:
        cout << "Enter base and height :: ";
        cin >> b >> h;
        area(b, h);
        break;

    default:
        cout << "Invalid Choice!";
        break;
    }
    return 0;
}
