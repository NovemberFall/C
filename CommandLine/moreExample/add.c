#include<stdio.h>
#include<stdlib.h> //atof, atoi

int main(int argc, char **argv){
    if(argc == 1){
        printf("Insufficient parameters\n");
        return 0;
    }

    double sum = 0.0;

    int i;
    for(i = 1; i < argc; i++){
        sum = sum + atof(argv[i]);  
        //the purpose of atof is to convert a string to floating pointer or a real number
    }
    printf("Sum is: %lf\n", sum);

    return 0;
}