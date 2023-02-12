#include <stdio.h>
#include <string.h>
#define max 5

char tt[5][2][max] = {{"1", ""}, {"", "23"}, {"2", ""}, {"4", ""}, {"", "4"}};

int l;
int flag = 0;
void rec(int cst, int i, char str[])
{
    int id = 0;
    for (; id < strlen(tt[cst][str[i] - 'a']) && i < l; id++)
        rec(tt[cst][str[i] - 'a'][id] - '0', i + 1, str);

    if (i == l && !flag && (cst == 2 || cst == 4))
    {
        printf("Accepted\n");
        flag = 1;
    }
}

int main()
{
    char str[30];
    printf("Enter the string: ");
    scanf("%s", str);
    l = strlen(str);
    // Function calling
    rec(0, 0, str);
    if (flag == 0)
    {
        printf("Rejected\n");
    }
    return 0;
}
// Terminal

// Enter the string: aba
// Accepted

// Enter the string: abb
// Rejected