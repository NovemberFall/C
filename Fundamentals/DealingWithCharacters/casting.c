#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5, b = 2;
    float r;
    // r = a / b;

    // r = (float)a / b;

    r = a / (float)b;
    printf("r = %f\n", r);

    return 0;
}



