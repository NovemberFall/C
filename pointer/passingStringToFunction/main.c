#include <stdio.h>
#include <stdlib.h>
#define MAX 30
/**
 * Write a function split that receives a string like "book*abacus" and splits it into two strings,
 * first and last. The first contains all the characters prior to that * and last contains all the 
 * characters after that *.
 * We can assume that there is only one * there.
 * 
 * prior to (在...之前)
*/

void split(char str[], char first[], char second[]){
    int i = 0;
    int j = 0;
    while(str[i] != '*'){
        first[j] = str[i];
        i++; j++;
    }
    first[j] = '\0'; //first terminate
    i = i+1;
    j = 0;
    while(str[i] != '\0'){
        second[j] = str[i];
        i++; j++;
    }
    second[j] = '\0';
}

int main(){
    char str[] = "book*abacus";
    char first[MAX];
    char second[MAX];
    split(str, first, second);
    printf("First Part: %s\n", first);
    printf("Second Part: %s\n", second);

    return 0;
}