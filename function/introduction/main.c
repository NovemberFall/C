#include<stdio.h>

double getSimpleInterest(double principal, double rate, double time){
    double interest;
    interest = (principal * rate * time)/100.0;
    return interest;
}

int main(){
    double p, r, t, i;
    printf("Enter principal: ");
    scanf("%lf", &p);
    printf("Enter rate of interest: ");
    scanf("%lf", &r);
    printf("Enter duration: ");
    scanf("%lf", &t);

    i = getSimpleInterest(p, r, t);
    printf("Total Interest: $%0.2lf\n", i);
    
    return 0;
}