#include <stdio.h>
int main()
{
    int q = 1;
    q = q++ + ++q * --q - q--;
    printf("a = %d%n", q);
}