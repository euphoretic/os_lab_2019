#include "revert_string.h"

void RevertString(char *str)
{
	int n = 0;
    int i = 0;
    for (i = 0; str[i]!= 0; i++)
    {
        n++;
    }
    for (i = 0; i < n/2; i++)
    {
        char between = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = between;
    }
}