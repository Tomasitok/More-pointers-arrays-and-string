#include <stdio.h>
#include "main.h"
/**
 * _strcat == concatenates two strings
 * return == dest_start
*/

char *_strcat(char *dest, char *src)
{
    char *dest_start = dest;
    while (*dest != '\0')
    {
        dest++;
    }
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return dest_start;
}