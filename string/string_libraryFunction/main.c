// #include<stdio.h>
// #include<string.h>

// int main(){
//     char first[80]="Chocolate Candy";
//     char second[80];

//     strcpy(second, first);
//     printf("Copied sring: %s\n", second);

//     return 0;
// }






















// #include<stdio.h>
// #include<string.h>

// int main(){
//     char first[80]="Chocolate";
//     char second[80]="Candy";

//     strcat(first, second);
//     printf("The first array contains: %s\n", first);

//     return 0;
// }



























// #include<stdio.h>
// #include<string.h>

// int main(){
//     char first[80]="Chocolate";
//     char second[80]="Candy";

//     strcat(first, " ");
//     strcat(first, second);
//     printf("The first array contains: %s\n", first);

//     return 0;
// }






















#include<stdio.h>
#include<string.h>

int main(){
    char first[80]="cat";
    char second[80]="zebra";

    int i;
    i = strcmp(first, second);
    if(i==0){
        printf("Both are exactly equal\n");
    }else if(i<0){
        printf("%s comes first\n", first);
    }else{
        printf("%s comes first\n", second);
    }

    return 0;
}