#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    //declare the array
    int x[n];
    int i;

    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        x[i] = rand() % 100;
    }
    printf("Content fo the array: \n");
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        printf("%4d", x[i]);
        sum = sum + x[i];
    }
    printf("\nSum is %d\n", sum);
    double avg = (double)sum / n;
    printf("Average of the numbers: %lf\n", avg);
    return 0;
}