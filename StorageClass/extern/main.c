#include<stdio.h>

int main(){
    extern int x; //这里声明使用的是外部全局变量
    printf("extern x=%d\n", x);
    return 0;
}

int x = 100;