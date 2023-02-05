#include <stdio.h>
#include "main.h"

int wildcmp(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
    {
        return 1;
    }
    if (*s2 == '*')
    {
        if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
        {
            return 1;
        }
    }
    if (*s1 == *s2)
    {
        return wildcmp(s1 + 1, s2 + 1);
    }
    return 0;
}

int main(void)
{
    char s1[] = "hello";
    char s2[] = "he*o";
    int result = wildcmp(s1, s2);
    printf("%d\n", result);
    return 0;
}

