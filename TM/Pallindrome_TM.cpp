#include <bits/stdc++.h>
using namespace std;

void TM(string &str, int i, int state, bool &flag)
{
    switch (state)
    {
    case 0:
        if (str[i] == 'a')
        {
            str[i] = 'B';
            TM(str, i + 1, 1, flag);
        }
        else if (str[i] == 'b')
        {
            str[i] = 'B';
            TM(str, i + 1, 2, flag);
        }
        else if (str[i] == 'B')
        {
            return;
        }
        else
        {
            flag = false;
            return;
        }
        break;

    case 1:
        if (str[i] == 'a' || str[i] == 'b')
        {
            TM(str, i + 1, 1, flag);
        }
        else if (str[i] == 'B')
        {
            // str[i] = 'B';
            TM(str, i - 1, 3, flag);
        }
        else
        {
            flag = false;
            return;
        }
        break;

    case 2:
        if (str[i] == 'a' || str[i] == 'b')
        {
            TM(str, i + 1, 2, flag);
        }
        else if (str[i] == 'B')
        {
            // str[i] = 'B';
            TM(str, i - 1, 4, flag);
        }
        else
        {
            flag = false;
            return;
        }
        break;

    case 3:
        if (str[i] == 'a')
        {
            str[i] = 'B';
            TM(str, i - 1, 5, flag);
        }
        else if (str[i] == 'B')
        {
            // str[i] = 'B';
            // TM(str, i + 1, 2, flag);
            return;
        }
        else
        {
            flag = false;
            return;
        }
        break;

    case 4:
        if (str[i] == 'b')
        {
            str[i] = 'B';
            TM(str, i - 1, 5, flag);
        }
        else if (str[i] == 'B')
        {
            // str[i] = 'B';
            // TM(str, i + 1, 2, flag);
            return;
        }
        else
        {
            flag = false;
            return;
        }
        break;

    case 5:
        if (str[i] == 'b' || str[i] == 'a')
        {
            // str[i] = 'B';
            TM(str, i - 1, 5, flag);
        }
        else if (str[i] == 'B')
        {
            // str[i] = 'B';
            TM(str, i + 1, 0, flag);
        }
        else
        {
            flag = false;
            return;
        }
        break;
    }
}

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    bool flag = true;
    str.insert(str.begin(), 'B');
    str.push_back('B');

    TM(str, 1, 0, flag);
    if (flag)
        cout << "Accepted" << endl;
    else
        cout << "Rejected" << endl;
    return 0;
}
// Terminal

// Enter the string: ababa
// Accepted