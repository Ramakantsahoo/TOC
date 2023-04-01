#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    stack<char> stk;
    bool flag = true;
    char cst = '0';
    for (int i = 0; i < s.length(); i++)
    {
        if (cst == '0')
        {
            if (s[i] == '0')
            {
                cst = '0';
                stk.push('0');
            }
            else if (s[i] == '1')
            {
                cst = '1';
            }
        }
        else if (cst == '1')
        {
            if (s[i] == '1')
            {
                if (!stk.empty())
                {
                    stk.pop();
                    cst = '2';
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                flag = false;
                break;
            }
        }
        else if (cst == '2')
        {
            if (s[i] == '1')
            {
                cst = '1';
            }
            else
            {
                flag = false;
                break;
            }
        }
    }
    if (stk.empty() && flag)
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;

    return 0;
}