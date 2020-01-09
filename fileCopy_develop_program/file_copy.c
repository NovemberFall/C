#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Invalid number of parameters, must be 3\n");
        exit(0);
    }
    FILE *source, *dest;
    source = fopen(argv[1], "rb"); //read binary mode, since we want to read any file including binary or text file
    //it'll be able to copy image files video files all the files

    return 0;
}