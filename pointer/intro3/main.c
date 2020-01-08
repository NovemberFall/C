// #include<stdio.h>
// int main(){
//     int *p;
//     float *f;
//     double *d;

//     printf("%lu %lu %lu\n", sizeof(p), sizeof(f), sizeof(d));
//     printf("%lu %lu %lu\n", sizeof(*p), sizeof(*f), sizeof(*d));
//     return 0;
// }




















#include<stdio.h>
int main(){
    int *p;
    float *f;
    double *d;
    char *k;

    printf("%lu %lu %lu %lu\n", sizeof(p), sizeof(f), sizeof(d), sizeof(k));
    printf("%lu %lu %lu %lu\n", sizeof(*p), sizeof(*f), sizeof(*d), sizeof(*k));
    return 0;
}