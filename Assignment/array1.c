#include <stdio.h>
#include <math.h>

// maximum size of the arrays
const int MAX = 20;

int main(){
    // declaring 2 double arrays.
    float first[MAX], second[MAX];
    int count = 0;
    float temp;

    printf("Enter maximum %d numbers, terminate with 0.0\n", MAX);
    printf("First number: ");
    scanf("%f", &temp);

    // do as long as count < MAX and the last input is not 0.0
    while(count < MAX && temp != 0.0){
        // the last input was not a zero and we still have
        // rooms in the array
        first[count++] = temp;
        printf("Next: ");
        scanf("%f", &temp);
    }
    printf("\n");
    printf("There are in total %d numbers given as input\n\n", count);
    int index;
    for(index = 0; index < count; ++index){
        if (index % 2 == 0){
            second[index] = 2 * first[index];
        }
        else{
            second[index] = cbrt(first[index]);
        }
    }
    // printing into the console
    printf("%12s %12s\n\n", "Input Array", "2nd Array");
    float firstSum = 0.0, secondSum = 0.0;
    for(index = 0; index < count; ++index){
        printf("%12.5f %12.5f\n", first[index], second[index]);
        firstSum += first[index];
        secondSum += second[index];
    }
    printf("\n\n");
    printf("Sum of the first array: %12.5f\n", firstSum);
    printf("Sum of the second array: %12.5f\n", secondSum);

    return 0;
}
