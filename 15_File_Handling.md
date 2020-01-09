## Introduction to file handling, writing characters into a text file using fputc()
```c++
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
```
![](img/2020-01-08-19-32-08.png)
---

- update
```c++
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
    char ch;
    for(ch = 'A'; ch<='Z'; ch++){
        fputc(ch, fp);
    }

    fclose(fp);
    printf("Success\n");

    return 0;
}
```
![](img/2020-01-08-19-34-58.png)
---


## Reading content of a text file character by character using fgetc()
```c++
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
```
![](img/2020-01-08-19-42-34.png)
---


## Reading a line from text file into a character array using fgets function
```c++
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
```
![](img/2020-01-08-19-49-32.png)
---


## Reading formatted data from text file using fscanf function
```c++
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
```
![](img/2020-01-08-20-02-22.png)
---


## Writing formatted data into text file using fprintf function
- fprintf/main.c
```c++
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

    while(1){
        fscanf(fp, " %[^,],%d", name, &salary);
        printf("%s gets $%d per hour\n", name, salary);
        fprintf(fpr, "%s gets $%d per hour\n", name, salary);

        if(feof(fp)){
            break;
        }
    }
    
    fclose(fp);
    printf("\n");
    return 0;
}
```
![](img/2020-01-08-20-09-33.png)
---


## Formatted data reading and writing - another example
- read_write/main.c
```c++
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
```
![](img/2020-01-08-20-18-07.png)
---




## Writing in binary mode - fwrite function
```c++
```


```c++
```



```c++
```


```c++
```



```c++
```


```c++
```



```c++
```


