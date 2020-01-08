#include <stdio.h>
int main()
{
    int x = 10;
    int *p;
    p = &x;

    printf("Content of p: %lu\n", p);

    p = p + 1;
    printf("Content of p: %lu\n", p);

    return 0;
}