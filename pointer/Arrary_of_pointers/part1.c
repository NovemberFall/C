// #include <stdio.h>
// #include <stdlib.h> //malloc, calloc, realloc
// int main()
// {
//     /**
//      * p is array of pointer
//      * each element of array p
//      * is integer pointer
//     */
//     int *p[3];
//     int **k;
//     int x[] = {1, 2, 3};
//     int y[] = {10, 20, 30};
//     int z[] = {5, 6, 7};

//     p[0] = x;
//     p[1] = y;
//     p[2] = z;

//     printf("%d\n", *p);
//     printf("%d\n", *(p+1));
//     printf("%d\n", *(p+2));
//     return 0;
// }



























// #include <stdio.h>
// #include <stdlib.h> //malloc, calloc, realloc
// int main()
// {
//     /**
//      * p is array of pointer
//      * each element of array p
//      * is integer pointer
//     */
//     int *p[3];
//     int **k;
//     int x[] = {1, 2, 3};
//     int y[] = {10, 20, 30};
//     int z[] = {5, 6, 7};

//     p[0] = x;
//     p[1] = y;
//     p[2] = z;

//     printf("%d\n", **p);
//     printf("%d\n", **(p+1));
//     printf("%d\n", **(p+2));
//     return 0;
// }
































#include <stdio.h>
#include <stdlib.h> //malloc, calloc, realloc
int main()
{
    /**
     * p is array of pointer
     * each element of array p 
     * is integer pointer
    */
    int *p[3];
    int **k;
    int x[] = {1, 2, 3};
    int y[] = {10, 20, 30};
    int z[] = {5, 6, 7};

    p[0] = x;
    p[1] = y;
    p[2] = z;

    printf("%d\n", **p);
    printf("%d\n", *(*(p + 1) + 2)); //30
    return 0;
}