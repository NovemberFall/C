#include <stdio.h>
#include <stdlib.h> //malloc, calloc, realloc
int main(){
    char *str = "Hello";
    printf("%s\n", str);

    *(str+1)='o';
    printf("%s\n", str);
    return 0;
}