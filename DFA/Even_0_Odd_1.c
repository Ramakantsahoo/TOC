#include <stdio.h>
#include <string.h>

void q0(char s[], int index);
void q1(char s[], int index);
void q2(char s[], int index);
void q3(char s[], int index);

void q0(char s[], int index)
{
    if (index == strlen(s))
    {
        printf("Rejected\n");
        return;
    }
    if (s[index] == '0')
    {
        q1(s, index + 1);
    }
    else
    {
        q3(s, index + 1);
    }
}

void q1(char s[], int index)
{
    if (index == strlen(s))
    {
        printf("Rejected\n");
        return;
    }
    if (s[index] == '0')
    {
        q0(s, index + 1);
    }
    else
    {
        q2(s, index + 1);
    }
}

void q2(char s[], int index)
{
    if (index == strlen(s))
    {
        printf("Rejected\n");
        return;
    }
    if (s[index] == '0')
    {
        q3(s, index + 1);
    }
    else
    {
        q1(s, index + 1);
    }
}

void q3(char s[], int index)
{
    if (index == strlen(s))
    {
        printf("Accepted\n");
        return;
    }
    if (s[index] == '0')
    {
        q2(s, index + 1);
    }
    else
    {
        q0(s, index + 1);
    }
}

int main()
{
    char s[20];
    printf("Enter a binary string: ");
    scanf("%s", s);

    q0(s, 0);
    return 0;
}
// Terminal

// Enter a binary string: 1111001
// Accepted

// Enter a binary string: 00110
// Rejected