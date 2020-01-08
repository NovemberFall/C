#include<stdio.h>

void printArray(int *p_arr, int n){
    int i;
    printf("Content of array: ");
    for(i=0; i<n; i++){
        printf("%4d", *(p_arr + i));
    }
    printf("\n");
}

int main(){
    int x[] ={10, 20, 30, 40, 50};
    int y[] ={1, 2, 3, 4, 5, 6};
    printArray(x, 5);
    printArray(y, 6);
    return 0;
}