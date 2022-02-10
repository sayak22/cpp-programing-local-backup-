// Sayak Mondal / 20155
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << (char)(64 + i);
        cout << endl;
    }
    return 0;
}
