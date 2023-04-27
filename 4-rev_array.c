#include <stdio.h>
#include "main.h"
/**
 * reverse_array == reverses the contents of an array of integers
 * return == nothing
*/

void reverse_array(int *a, int n)
{
    int temp, i;
    for(i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }
}