#include<stdio.h>
#define SIZE 80

int main(){
    FILE *fp;
    fp = fopen("/Users/Git/gitc/File_Handling/data_file/names.txt", "r");
    //if want to write binary mode, using `wb`

    if(fp == NULL){
        printf("Unable to open file\n");
        return 0;
    }

    char names[SIZE];
    while(1){
        fgets(names, SIZE, fp);
        printf("%s", names);
        if(feof(fp)){
            break;
        }
    }
    
    fclose(fp);
    printf("\n");
    return 0;
}