#include<stdio.h>
#include "headers/area.h"
#include "headers/mymath.h"
int main(){
    double interest;
    interest = getSimpleInterest(10000.00, 10.0, 5.0);
    printf("Interest is : %lf\n", interest);

    double t_area = getTriangleArea(5.0, 7.5);
    double c_area = getCircleArea(5.5);

    printf("Area of the triangle: %lf\n", t_area);
    printf("Area of the circle: %lf\n", c_area);

    return 0;
}