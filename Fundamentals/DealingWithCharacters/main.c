#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     char ch = 'A';
//     printf("Character is %c\n", ch);
//     printf("Enter a character: ");

//     char another;
//     scanf("%c", &another);
//     printf("You have typed : %c\n", another);
//     return 0;
// }




























// //2nd way input a character from keyboard
// int main()
// {
//     char ch = 'A';
//     printf("Character is %c\n", ch);
//     printf("Enter a character: ");

//     char another;
//     another = getchar();
//     printf("You have typed : %c\n", another);
//     return 0;
// }

























//ASCII : American Standard Code for Information Interchange
/*
- for capital A is 65, B for 66, C for 67
- for small letter is actually assigned a value 97
*/
int main()
{
    char ch = 'A';
    printf("%d - %c\n", ch, ch);

    int i=65;
    printf("%d - %c\n", i, i);
    printf("\n");
    printf("**********************************\n");

    for(i=65; i<91; i++){
        printf("%d - %c\n", i, i);
    }

    return 0;
}