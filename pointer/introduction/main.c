#include<stdio.h>
int main(){
    int var = 5;

    int *p; 
    // float *k;
    // double *d;

    printf("%p\n", &var);
    p = &var;

    *p = 10;
    printf("%d\n", var);


    // printf("%lu\n", &var);
    return 0;
}