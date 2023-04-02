#include <bits/stdc++.h>
using namespace std;

void q0(string str, int i);
void q1(string str, int i);
void q2(string str, int i);
void q3(string str, int i);

void q0(string str, int i)
{
    if (str[i] == '0' || str[i] == '1')
    {
        q0(str, i + 1);
    }
    else if (str[i] == 'B')
    {
        q1(str, i - 1);
    }
}

void q1(string str, int i)
{
    if (str[i] == '0')
    {
        q1(str, i - 1);
    }
    else if (str[i] == 'B')
    {
        q3(str, i + 1);
    }
    else if (str[i] == '1')
    {
        q2(str, i - 1);
    }
}

void q2(string str, int i)
{
    if (str[i] == '0')
    {
        str[i] = '1';
        q2(str, i - 1);
    }
    else if (str[i] == '1')
    {
        str[i] = '0';
        q2(str, i - 1);
    }
    else if (str[i] == 'B')
    {
        q3(str, i - 1);
    }
}
void q3(string str, int i)
{
    cout<<"2's Compliment is: ";
    for (int i = 1; i < str.length() - 1; i++)
    {
        cout << str[i];
    }
}

int main()
{
    string str;
    cout << "Enter the string: ";
    cin >> str;
    str.insert(str.begin(), 'B');
    str.push_back('B');
    q0(str, 1);
    return 0;
}

// Terminal

// Enter the string: 01101
// 2's Compliment is: 10011