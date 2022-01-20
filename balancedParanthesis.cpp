#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool isValid(string s)
{
    int n = s.length();
    bool ans = true;
    stack<char> stk;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            stk.push(s[i]);
        else if (!stk.empty() &&s[i] == ')')
        {
            if (stk.top() == '(')
                stk.pop();
            else
            {
                ans = false;
                break;
            }
        }
        else if (!stk.empty() && s[i] == ']')
        {
            if (stk.top() == '[')
                stk.pop();
            else
            {
                ans = false;
                break;
            }
        }
        else if (!stk.empty() && s[i] == '}')
        {
            if (stk.top() == '{')
                stk.pop();
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (!stk.empty())
        return false;
    else
        return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "[{()}]";
    if (isValid(s))
        cout << "valid";
    else
        cout << "invalid";
    return 0;
}