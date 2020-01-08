#include <stdio.h>

int main()
{
    int x[] = {10, 20, 30, 40, 50};

    printf("%p, %p\n", x, &x[0]);

    int i = 0;
    printf("\nContent of the array is: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%4d ", *(x + i));
    }
    printf("\n");

    return 0;
}