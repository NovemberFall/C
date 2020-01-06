#include <stdio.h>

//input a string and count no of alphabets and spaces in the string, finally 
//print your result into the console
int main(){

    char str[80];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int i, countAlpha = 0, countSpace=0;

    for(i=0; str[i]!='\0'; i++){
        if((str[i] >= 'A' && str[i]<='Z') || (str[i] >= 'a' && str[i]<='z')){
            countAlpha++;
        }else if(str[i] == ' ' || str[i] == 32){
            countSpace++;
        }
    }
    printf("Total alphabetic characters found: %d\n", countAlpha);
    printf("Total spaces characters found: %d\n", countSpace);


    return 0;
}