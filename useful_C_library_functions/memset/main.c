// #include<stdio.h>
// #include<string.h>

// int main(){
//     char my_str[]="Blah blah, Hello World!!";
//     memset(my_str, '@', 4);

//     printf("%s\n", my_str);
//     return 0;
// }



















// #include<stdio.h>
// #include<string.h>

// int main(){
//     char my_str[]="Blah blah, Hello World!!";
//     memset(my_str + 5, '@', 4);

//     printf("%s\n", my_str);
//     return 0;
// }























#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char my_str[]="Blah blah, Hello World!!";
    memset(my_str + 5, '@', 4);

    printf("%s\n", my_str);
    char *p = (char *)malloc(sizeof(char) * 20);
    memset(p, '\0', 20);
    memset(p, '-', 19);
    printf("%s\n", p);   

    return 0;
}