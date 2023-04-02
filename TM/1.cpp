#include <bits/stdc++.h>
using namespace std;

void TM(string &str, int i, int state, bool &flag)
{
    switch (state)
    {
    case 0:
        if (str[i] == '0')
        {
            str[i] = 'X';
            TM(str, i + 1, 1, flag);
        }
        else if (str[i] == 'Y')
        {
            str[i] = 'Y';
            TM(str, i + 1, 3, flag);
        }
        else
        {
            flag = false;
            return;
        }
        break;

    case 1:    
        if (str[i] == '0' || str[i] == 'Y')
        {
            TM(str, i + 1, 1, flag);
        }
        else if (str[i] == '1')
        {
            str[i] = 'Y';
            TM(str, i - 1, 2, flag);
        }
        else
        {
            flag = false;
            return;
        }
        break;

    case 2:    
        if (str[i] == '0' || str[i] == 'Y')
        {
            TM(str, i - 1, 2, flag);
        }
        else if (str[i] == 'X')
        {
            TM(str, i + 1, 0, flag);
        }
        else
        {
            flag = false;
            return;
        }
        break;

    case 3:    
        if (str[i] == 'Y')
        {
            TM(str, i + 1, 3, flag);
        }
        else if (str[i] == 'b')
        {
            return;
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
    str.insert(str.begin(), 'b');
    str.push_back('b');

    TM(str,1,0,flag);
    if(flag)
        cout<<"Accepted"<<endl;
    else    
        cout<<"Rejected"<<endl;    
    return 0;
}