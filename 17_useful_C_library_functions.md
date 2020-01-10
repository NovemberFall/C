## sprintf and snprintf - write formatted string into character array
```c++
#include<stdio.h>
#include<string.h>
/**
 * sprintf - write a formatted string into a character array
 * Just like printf, but it prints the string into an array instead of printing into the console
*/
int main(){
    int var1 = 10;
    double var2 = 2.25;
    char buff_string[100];

    sprintf(buff_string, "Value of var1 = %d and var2 = %lf\n", var1, var2);

    printf("%s", buff_string);
    return 0;
}

```
![](img/2020-01-09-17-26-48.png)
-
- update
```c++
#include<stdio.h>
#include<string.h>
/**
 * sprintf - write a formatted string into a character array
 * Just like printf, but it prints the string into an array instead of printing into the console
*/
int main(){
    int var1 = 10;
    double var2 = 2.25;
    char buff_string[100];

    int count = sprintf(buff_string, "Value of var1 = %d and var2 = %lf\n", var1, var2);

    printf("%s", buff_string);
    printf("count = %d\n", count);
    return 0;
}
```
![](img/2020-01-09-17-30-24.png)
---

- update
```c++
#include<stdio.h>
#include<string.h>
/**
 * sprintf - write a formatted string into a character array
 * Just like printf, but it prints the string into an array instead of printing into the console
*/
int main(){
    int var1 = 10;
    double var2 = 2.25;
    char buff_string[100];
    char str[] = ", this is fun!";
    int count = sprintf(buff_string, "Value of var1 = %d and var2 = %lf%s\n", var1, var2, str);

    printf("%s", buff_string);
    printf("count = %d\n", count);
    return 0;
}
```
![](img/2020-01-09-17-32-48.png)
---

## strtok - great tool to extract information from a string separated by delimiters
```c++
#include<stdio.h>
#include<string.h>
//use of strtok

int main(){
    char source[] = "Hello World, 40#5.5,400,2.5";
    char delims[] = ",#";

    char *token;
    token = strtok(source, delims);
    printf("Token: %s\n", token);

    return 0;
}
```
![](img/2020-01-09-17-45-19.png)
-
- update
```c++
#include<stdio.h>
#include<string.h>
//use of strtok

int main(){
    char source[] = "Hello World, 40#5.5,400,2.5";
    char delims[] = ",#";

    char *token;
    token = strtok(source, delims);
    printf("Token: %s\n", token);

    token = strtok(NULL, delims);
    printf("Token: %s\n", token);
    
    token = strtok(NULL, delims);
    printf("Token: %s\n", token);


    return 0;
}
```
![](img/2020-01-09-17-50-36.png)
---


- update
```c++
#include<stdio.h>
#include<string.h>
//use of strtok

int main(){
    char source[] = "Hello World, 40#5.5,400,2.5";
    char delims[] = ",#";

    char *token;
    token = strtok(source, delims);

    while(token != NULL){
        printf("Token: %s\n", token);
        token = strtok(NULL, delims);
    }

    return 0;
}
```
![](img/2020-01-09-17-53-19.png)
---

## memset - learn how to initialize block of memory with a character using memset


```c++

```


```c++

```


```c++

```




```c++

```


```c++

```


```c++

```




```c++

```


```c++

```


```c++

```


