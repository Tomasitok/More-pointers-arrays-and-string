#include <stdio.h>
#include "main.h"
/**
 * _strncat == concatenates two strings with maximum n bytes of src
 * return == dest_start
*/

char *_strncat(char *dest, char *src, int n)
{
    char *dest_start = dest;
    while (*dest)
    {
        *dest++;
    }
    while (n > 0 && *src)
    {
        *dest++ = *src++;
        n--;   
    }
    *dest = '\0';
    return dest_start;
}