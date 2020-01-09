#include<stdio.h>
typedef enum{
    SUN, MON, TUES, WED, THURS, FRI, SAT
}days_of_week;

typedef enum{
    FALSE, TRUE
}Boolean;

Boolean isEven(int n){
    if(n % 2 == 0){
        return TRUE;
    }else{
        return FALSE;
    }
}

int main(){
    days_of_week day = SAT;

    if(day == SAT || day == SUN){
        printf("Holiday\n");
    }else{
        printf("Not holiday\n");
    }
    printf("Value of SUN is: %d\n", SUN);
    return 0;
}