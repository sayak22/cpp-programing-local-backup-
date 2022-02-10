// Sayak Mondal / 20155
#include <bits/stdc++.h>
using namespace std;
class num
{
public:
    int a, b, c;
    int greatest()
    {
        if (a > b && a > c)
            return a;
        else if (b > c)
            return b;
        else
            return c;
    }
};

int main(int argc, char const *argv[])
{
    num ob;
    cout << "Enter 3 numbers :: ";
    cin >> ob.a >> ob.b >> ob.c;
    cout << "greatest among the 3 :: " << ob.greatest();
    return 0;
}
