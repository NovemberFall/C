## Printing content of variable using printf
```c++
#include <stdio.h>
#include <stdlib.h>

int main(){
    int id = 5;
    int age = 20;
    double weight = 50.75;
    char grade = 'A';

    printf("The content of ID is: %d\n", id);

    printf("The content of ID is: %d, age=%d, weight=%f\n", id, age, weight);
    return 0;
}
```
![](img/2020-01-04-00-11-45.png)
---

## Reading Data from keyboard into variable using scanf.
```c++
#include <stdio.h>
#include <stdlib.h>

int main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Age = %d\n", age);

    return 0;
}
```
![](img/2020-01-04-00-30-44.png)
---

## Initialization of variable, octal and hexadecimal initialization
```c++
int main(){
    int aVar = 015;
    printf("Content of aVar = %d\n", aVar);
    //Content of aVar = 13
    printf("Content of aVar = %o\n", aVar);
    printf("Content of aVar = %x\n", aVar);
    return 0;
}
```
![](img/2020-01-04-00-39-39.png)
---

## Arithmetical Operators in C
```c++
int main(){
    int a = 10, b = 2;

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d %% %d = %d\n", a, b, a%b);

    return 0;
}
```
![](img/2020-01-04-00-48-20.png)
---

## Dealing with characters
- input a character from keyboard 1st way:
```c++
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch = 'A';
    printf("Character is %c\n", ch);
    printf("Enter a character: ");

    char another;
    scanf("%c", &another);
    printf("You have typed : %c\n", another);
    return 0;
}
```
![](img/2020-01-04-09-23-16.png)
-

- 2nd way
```c++
//2nd way input a character from keyboard
int main()
{
    char ch = 'A';
    printf("Character is %c\n", ch);
    printf("Enter a character: ");

    char another;
    another = getchar();
    printf("You have typed : %c\n", another);
    return 0;
}
```
![](img/2020-01-04-09-24-19.png)
---

## ASCII : American Standard Code for Information Interchange
- for capital A is 65, B for 66, C for 67
- for small letter is actually assigned a value 97
-
```c++
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
```
![](img/2020-01-04-09-40-22.png)



