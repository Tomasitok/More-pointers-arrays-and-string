#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * cap_string == Write a function that capitalizes all words of a string
 * return == s
*/

char *cap_string(char *s)
{
    int i = 0;
    if (islower(s[i]))
    {
        s[i] = toupper(s[i]);
    }
    while (s[i] != '\0')
    {
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
        {
            if (islower(s[i + 1]))
            {
                s[i + 1] = toupper(s[i + 1]);
            }
        }
        i++;
    }
    return s;
}
