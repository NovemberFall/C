#include<stdio.h>
#define SIZE 80

int main(){
    FILE *fp;
    FILE *fpr;

    fp = fopen("/Users/Git/gitc/File_Handling/data_file/names1.txt", "r");
    if(fp == NULL){
        printf("Unable to open file\n");
        return 0;
    }

    fpr = fopen("/Users/Git/gitc/File_Handling/data_file/reports.txt", "w");
    if(fpr == NULL){
        printf("Unable to open file\n");
        return 0;
    }

    char name[SIZE];
    int salary;
    double pertHRA;
    double houseRent;
    double netSalary;

    while(1){
        fscanf(fp, " %[^,],%d, %lf", name, &salary, &pertHRA);
        // printf("%s gets $%d per hour\n", name, salary);
        houseRent = salary * pertHRA;
        netSalary = salary - houseRent;
        fprintf(fpr, "%-20s %10d %4.2lf %6.2lf %10.2lf \n", name, salary, pertHRA, houseRent, netSalary);

        if(feof(fp)){
            break;
        }
    }
    
    fclose(fp);
    printf("\n");
    return 0;
}