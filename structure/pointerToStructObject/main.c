//pointer to struct object
#include<stdio.h>

typedef struct{
    int roll;
    char name[20];
    double gp;
} Student;


int main(){
    Student s;
    Student *sp;

    sp = &s;

    (*sp).roll = 15;
    printf("%d\n", (*sp).roll);

    sp->roll = 17;
    scanf("%[^\n]", sp->name);
    return 0;
}