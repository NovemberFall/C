// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main(){
//     char source[]="Blah blah, Hello World!!";
//     char destination[100];
//     memcpy(destination, source, 4);
//     destination[4] = '\0';
//     printf("%s\n", destination);

//     return 0;
// }























#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int *p = (int *)malloc(sizeof(int) *10);
    int i = 0;
    srand(time(NULL));
    for(i=0; i<10; ++i){
        *(p + i) = rand() % 100;
    }
    printf("Content of first block: ");
    for(i = 0; i<10; ++i){
        printf("%4d", *(p + i));
    }
    int *q = (int *)malloc(sizeof(int) * 5);

    mmecpy(q, p, 20);

    printf("Content of second block: ");
    for(i = 0; i<5; ++i){
        printf("%4d", *(q + i));
    }

    return 0;
}