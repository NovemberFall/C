#include<stdio.h>

int is_lower_case(char);
int is_upper_case(char);
char to_upper_case(char);
char to_lower_case(char);

char to_lower_case(char ch){
    return is_upper_case(ch) ? (ch + 32) : ch;
}

char to_upper_case(char ch){
    return is_lower_case(ch) ? (ch - 32) : ch;
}

int is_lower_case(char ch){
    // if(ch >= 'a' && ch <= 'z'){
    //     return 1;
    // }else{
    //     return 0;
    // }
    return (ch >= 'a' && ch <= 'z') ? 1 : 0;
}

int is_upper_case(char ch){
    return (ch>='A' && ch<='Z') ? 1 : 0;
}



int main(){
    char letter;
    letter = 'A';
    letter = to_lower_case(letter);
    printf("Lower case equivalent: %c\n", letter);

    letter='q';
    letter=to_upper_case(letter);
    printf("Upper case equivalent: %c\n", letter);

    return 0;
}