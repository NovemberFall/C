#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("/Users/Git/gitc/File_Handling/data_file/a.txt", "r");
    //if want to write binary mode, using `wb`

    if(fp == NULL){
        printf("Unable to open file\n");
        return 0;
    }

    //prime read
    char ch;
    ch = fgetc(fp);

    while(!feof(fp)){
        printf("%c", ch);
        ch = fgetc(fp);
    }

    fclose(fp);
    printf("\n");

    return 0;
}