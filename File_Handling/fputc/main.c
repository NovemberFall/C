#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("/Users/Git/gitc/File_Handling/data_file/a.txt", "w");
    //if want to write binary mode, using `wb`

    if(fp == NULL){
        printf("Unable to open file\n");
        return 1;
    }
    //file opened successfully

    fputc('a', fp);
    fputc('b', fp);

    fclose(fp);
    printf("Success\n");

    return 0;
}