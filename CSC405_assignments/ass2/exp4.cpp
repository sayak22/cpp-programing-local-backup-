// Sayak Mondal/20155
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter total number of voters :: ";
    int a, arr[5] = {0}, s = 0;
    cin >> a;
    while (a--)
    {
        int vote;
        cout << "Enter ballot number you want to vote for :: ";
        cin >> vote;
        if (vote == 1 || vote == 2 || vote == 3 || vote == 4 || vote == 5)

            arr[vote - 1]++;
        else
        {
            cout << "Spoilt ballot" << endl;
            s++;
        }
    }
    cout << "\nThe number of votes for 1 to 5 respectively are:-\n";
    for (int i = 0; i < 5; i++)
        cout << i + 1 << " - " << arr[i] << "\n";
    cout << "Number of spoilt ballot = " << s;
    return 0;
}
