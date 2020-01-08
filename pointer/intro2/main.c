#include<stdio.h>
int main(){
    int *p, *q; 
    int **k; //pointer, point to pointer
    int x = 100;

    p = &x;
    k = &p;

    printf("(**k)=%d\n", **k);

    **k = **k + 1;
    printf("x=%d\n", x);
    return 0;
}