// #include<stdio.h>

// int main(){
//     const double PI = 3.14;
//     int x[] = {1, 2, 3};
//     // int *p;
//     int * const p;

//     p = x;
//     p++;
//     return 0;
// }

























// #include<stdio.h>

// int main(){
//     const double PI = 3.14;
//     int x[] = {1, 2, 3};
//     int * const p = x;

//     printf("%d \n", *p);
//     return 0;
// }

























// #include<stdio.h>

// int main(){
//     const double PI = 3.14;
//     int x[] = {1, 2, 3};
//     int * const p = x;

//     p++; //this is illegal
//     (*p)++; //this is legal
//     return 0;
// }































#include<stdio.h>

int main(){
    const double PI = 3.14;
    int x[] = {1, 2, 3};
    const int *p = x;

    p++; //this is legal
    (*p)++; //this is illegal
    return 0;
}



































