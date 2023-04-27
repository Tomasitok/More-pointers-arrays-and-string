#include <stdio.h>
#include "main.h"
/**
 * string_toupper == changes all lowercase letters in a string to uppercase
 * return == str
*/

char *string_toupper(char *str)
{
    int i;
    while (str[i] != '\n')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}