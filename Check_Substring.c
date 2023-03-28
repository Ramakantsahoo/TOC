// Check whether a string is a substring of another string.

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20], s2[20];
    printf("Enter the string: ");
    scanf("%s", s1);
    printf("Enter the string to be checked as a substring: ");
    scanf("%s", s2);
    int flag = 0;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int count = 0;
    int i = 0;
    while (i < len1)
    {
        for (int j = i; j < i + len2; j++)
        {
            if (s1[j] == s2[j - i])
            {
                count++;
            }
        }
        if (count == len2)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 1)
        printf("%s is a substring of %s \n", s2, s1);
    else
        printf("%s is not a substring of %s \n", s2, s1);

    return 0;
}