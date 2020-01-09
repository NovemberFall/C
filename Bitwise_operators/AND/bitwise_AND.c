#include<stdio.h>
/**
 * check if a number is odd or even without using modulo operator %
*/
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if((x & 1) == 1){
        printf("%d is odd\n", x);
    }else{
        printf("%d is even\n", x);
    }
   
    return 0;
}