#include<stdio.h>

double getSimpleInterest(double, double, double);

int main(){
    double i;

    i = getSimpleInterest(1000.0, 5.0, 2);
    printf("Total Interest: $%0.2lf\n", i);
    
    return 0;
}





double getSimpleInterest(double principal, double rate, double time){
    double interest;
    interest = (principal * rate * time)/100.0;
    return interest;
}