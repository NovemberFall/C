#include<stdio.h>
#define SIZE 80

int main(){
    FILE *fp;
    fp = fopen("/Users/Git/gitc/File_Handling/data_file/names1.txt", "r");
    //if want to write binary mode, using `wb`

    if(fp == NULL){
        printf("Unable to open file\n");
        return 0;
    }

    char name[SIZE];
    int salary;

    while(1){
        fscanf(fp, " %[^,],%d", name, &salary);
        printf("%s gets $%d per hour\n", name, salary);

        if(feof(fp)){
            break;
        }
    }
    
    fclose(fp);
    printf("\n");
    return 0;
}