#include<stdio.h>

typedef struct{
    int roll;
    char name[20];
    double phy, chem, maths;
} Student;

void inputStudent(Student *);
char getGrade(Student);
void printStudent(Student);
double getAverageMarks(Student);

void inputStudent(Student *sp){
    printf("Roll: ");
    scanf("%d", &(sp->roll));
    printf("Name: ");
    scanf(" %[^\n]", sp->name);
    printf("Marks in Physics: ");
    scanf("%lf", &(sp->phy));
    printf("Marks in Chemistry: ");
    scanf("%lf", &(sp->chem));
    printf("Marks in Math: ");
    scanf("%lf", &(sp->maths));
}

double getAverageMarks(Student s){
    double sum = 0.0;
    sum = s.phy + s.chem + s.maths;
    return sum / 3.0;
}

char getGrade(Student s){
    char grade;
    double avg = getAverageMarks(s);

    if(avg >= 90){
        grade = 'A';
    }else if(avg >= 80 && avg < 90){
        grade = 'B';
    }else if(avg >= 70 && avg < 80){
        grade = 'C';
    }else if(avg >= 60 && avg < 70){
        grade = 'D';
    }else if(avg >= 50 && avg < 60){
        grade = 'E';
    }else{
        grade = 'F';
    }

    return grade;
}

void printStudent(Student s){
    printf("------------------ Student Details ------------------\n");
    printf("-----------------------------------------------------\n");
    printf("Roll:           %-4d\n", s.roll);
    printf("Name:           %-20s\n", s.name);
    printf("Physics:           %-10.2lf\n", s.phy);
    printf("Chemistry:           %-10.2lf\n", s.chem);
    printf("Math:           %-10.2lf\n", s.maths);
    printf("Grade:           %-4c\n", getGrade(s));
    printf("-----------------------------------------------------\n");
}


int main(){
    Student s;
    inputStudent(&s);
    printStudent(s);

    return 0;
}