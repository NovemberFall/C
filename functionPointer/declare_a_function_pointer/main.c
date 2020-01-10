#include<stdio.h>
#include<stdlib.h>
//Function pointer

void printMsg(){
    printf("Hello World!\n");
}

void fun(){
    printf("Its all fun\n");
}

int sum(int a, int b){
    return a + b;
}

int main(){
    void (*p)();

    p = printMsg;
    p();
    p = fun;
    p();

    int (*s)(int, int);
    s = sum;

    int result = s(10, 30);
    printf("sum is: %d\n", result);

    float(*fptr)(int[], float);



    return 0;
}