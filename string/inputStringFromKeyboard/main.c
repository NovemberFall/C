#include <stdio.h>
// int main()
// {
//     char str[80];
//     printf("Enter your name: ");
//     scanf("%s", str);

//     printf("Welcome, %s\n", str);
//     return 0;
// }

















// //regular expression
// int main()
// {
//     char str[80];
//     printf("Enter your name: ");
//     // scanf("%[A-Z]", str);
//     // scanf("%[A-Za-z]", str);
//     scanf("%[A-Za-z ]", str);

//     printf("Welcome, %s\n", str);
//     return 0;
// }





















// //regular expression
// int main()
// {
//     char str[80];
//     printf("Enter your name: ");
//     scanf("%[^\n]", str);

//     printf("Welcome, %s\n", str);
//     return 0;
// }























//regular expression
int main()
{
    char str[80];
    printf("Enter your name: ");
    scanf("%[^A]", str);

    printf("Welcome, %s\n", str);
    return 0;
}