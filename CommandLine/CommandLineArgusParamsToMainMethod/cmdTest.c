// #include<stdio.h>

// int main(int argc, char **argv){
//     printf("ARGC = %d\n", argc);
//     return 0;
// }
























#include<stdio.h>

int main(int argc, char **argv){
    printf("ARGC = %d\n", argc);
    int i;
    for(i=0; i<argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}