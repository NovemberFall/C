#include<stdio.h>

void test1(){
    int k;
    printf("k = %d\n", k);
    k = 20;
    printf("k = %d\n", k);
}

void test(){
    int var;
    printf("var = %d\n", var);
    var++;
    printf("var = %d\n", var);
}

int main(){
    test1();
    test();
    return 0;
}