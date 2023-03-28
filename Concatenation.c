// Write a program to concatenate two strings of different sizes.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30];
    char str2[30];
    char str3[60];

    printf("Enter 1st string: ");
    scanf("%s", str1);
    printf("Enter 2nd string: ");
    scanf("%s", str2);

    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }
    i = 0;
    while (str2[i] != '\0')
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
    printf("The concatenated string is: %s", str3);
    return 0;
}

// Terminal

// Enter 1st string: str
// Enter 2nd string: rts
// The concatenated string is: strrts