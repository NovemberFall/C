## Introduction to bitwise operators
![](img/2020-01-09-11-06-17.png)
- check self int bytes
```c
#include <stdio.h>
#include <limits.h>
 
int main() {
   printf("Storage size for int : %lu \n", sizeof(int));
   
   return 0;
}
```
![](img/2020-01-09-11-14-00.png)
---
![](img/2020-01-09-11-15-45.png)
- if we are using a variable for keeping the boolean information of our set of boolean information
- we can use the bitwise operator for initializing each bit of that variable and manipulate them 
![](img/2020-01-09-11-19-49.png)
---

## Bitwise leftshift operator
![](img/2020-01-09-14-47-59.png)
![](img/2020-01-09-14-59-28.png)
```c
#include<stdio.h>
int main(){
    int x = 5;
    x = x << 2;
    printf("x = %d\n", x);
    return 0;
}
```
- `X * 2^i`
- 
- `x = 20`
---

## Bitwise right shift operator
![](img/2020-01-09-14-58-27.png)
![](img/2020-01-09-14-59-01.png)
```c
#include<stdio.h>
int main(){
    int x = 20;
    x = x >> 1;
    printf("x = %d\n", x);
    return 0;
}
```
- `x / 2^i`
![](img/2020-01-09-15-09-53.png)

-
-
```c
#include<stdio.h>
int main(){
    int x = -20;
    x = x >> 2;
    printf("x = %d\n", x);
    return 0;
}
```
![](img/2020-01-09-15-11-25.png)
---

## Bitwise AND operator - how to check a bit
![](img/2020-01-09-15-15-06.png)
- what is the benefit of having this bitwise `AND` operation
- The benefit is that using this bitwise and we can check if a particular bit is 1 or 0
- That means that particular bit of a particular variable is set / unset
![](img/2020-01-09-15-21-17.png)
![](img/2020-01-09-15-28-07.png)
- if get 0, the number is even
```c
#include<stdio.h>
/**
 * check if a number is odd or even without using modulo operator %
*/
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if((x & 1) == 1){
        printf("%d is odd\n", x);
    }else{
        printf("%d is even\n", x);
    }
   
    return 0;
}
```
![](img/2020-01-09-15-31-27.png)
---


## Count set bits - Using bitwise `AND` and `left shift`

