#include <stdio.h>
#include "main.h"

int main(void)
{
    int n;

    for (n = 'a'; n <= 'z'; n++)
    {
        putchar(n);
        if (n == 'z')
            putchar('\n');
    }

    return (0);
}