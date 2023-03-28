// Print all possible Prefix's and Surfix's .

#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    printf("Enter the string: ");
    scanf("%s", str);
    int len = strlen(str);

    printf("Prefix's are: \n");
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Surfix's are: \n");
    for (int i = 0; i < len; i++)
    {
        for (int j = len - i ; j < len; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
// Terminal

// Enter the string: abcd
// Prefix's are:

// a
// ab
// abc

// Surfix's are:

// d
// cd
// bcd