#include<stdio.h>

typedef struct{
    int roll;
    char name[20];
    double gp;
} Student;

void inputStudent(Student *sp){
    printf("Enter roll: ");
    scanf("%d", &(sp->roll));
    printf("Enter name: ");
    scanf(" %[^\n]", sp->name);
    printf("Enter grade point: ");
    scanf("%lf", &(sp->gp));
}

void printStudent(Student sp){
    printf("Roll: %4d, Name: %-20s %10.2lf\n", sp.roll, sp.name, sp.gp);
}

int main(){
    Student s;
    inputStudent(&s);
    printStudent(s);

    return 0;
}