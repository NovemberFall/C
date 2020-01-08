#include <stdio.h>
#include <stdlib.h> //malloc, calloc, realloc
int main()
{
    int *p;
    int n;
    printf("Enter how many integers: ");
    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory\n Exiting the program\n");
        exit(1);
    }

    int i;
    for (i = 0; i < n; i++)
    {
        printf("Next Number: ");
        scanf("%d", p + i);
    }
    printf("Content of the array: ");
    for (i = 0; i < n; i++)
    {
        printf("%4d", *(p + i));
    }
    printf("\n");

    int new_num = n + 3;
    p = (int *)realloc(p, new_num * sizeof(int));
    if (p == NULL)
    {
        printf("Unable to allocate memory\n Exiting the program\n");
        exit(1);
    }

    *(p + n) = 10;
    *(p + n + 1) = 20;
    *(p + n + 2) = 30;
    free(p);

    printf("New Content of the array: \n");
    for (i = 0; i < new_num; i++)
    {
        printf("%4d", *(p + i));
    }
    printf("\n");
    return 0;
}