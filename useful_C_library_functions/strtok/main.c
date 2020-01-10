// #include<stdio.h>
// #include<string.h>
// //use of strtok

// int main(){
//     char source[] = "Hello World, 40#5.5,400,2.5";
//     char delims[] = ",#";

//     char *token;
//     token = strtok(source, delims);
//     printf("Token: %s\n", token);

//     return 0;
// }



















// #include<stdio.h>
// #include<string.h>
// //use of strtok

// int main(){
//     char source[] = "Hello World, 40#5.5,400,2.5";
//     char delims[] = ",#";

//     char *token;
//     token = strtok(source, delims);
//     printf("Token: %s\n", token);

//     token = strtok(NULL, delims);
//     printf("Token: %s\n", token);

//     token = strtok(NULL, delims);
//     printf("Token: %s\n", token);


//     return 0;
// }























#include<stdio.h>
#include<string.h>
//use of strtok

int main(){
    char source[] = "Hello World, 40#5.5,400,2.5";
    char delims[] = ",#";

    char *token;
    token = strtok(source, delims);

    while(token != NULL){
        printf("Token: %s\n", token);
        token = strtok(NULL, delims);
    }

    return 0;
}