#include<stdio.h>
#include<stdlib.h> //malloc, calloc, realloc
int main(){
    int *p;
    int n;
    printf("Enter how many integers: ");
    scanf("%d", &n);
    // p = (int *)malloc(100);
    p = (int *)malloc(n * sizeof(int));
    //since malloc return a void pointer, so it neet to be cast to int
    if(p == NULL){
        printf("Unable to allocate memory\n Exiting the program\n");
        exit(1); //if exit(0), then the calling environment will understand that it's a normal exit.
        //exit(1), passing 1, means there are some bad situation
    }

    //use the allocate space pointed by p for keeping values
    int i;
    for(i=0; i<n; i++){
        printf("Next Number: ");
        scanf("%d", p+i);
    }
    printf("Content of the array: ");
    for(i = 0; i<n; i++){
        printf("%4d", *(p+i));
    }
    printf("\n");


    return 0;
}