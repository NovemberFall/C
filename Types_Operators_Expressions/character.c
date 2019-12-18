#include<stdio.h>
#include<stdlib.h>

int main1(){
    char ch = 'A';
    putchar(ch);
    printf("%c", 'A');

    return 0;
}

int main(){
    char ch = 'A';
    printf("%d, %d", sizeof(ch), sizeof('A'));
    return 0;
}