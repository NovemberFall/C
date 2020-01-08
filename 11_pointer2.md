## use of const keyword with pointer
```c++
#include<stdio.h>

int main(){
    const double PI = 3.14;
    int x[] = {1, 2, 3};
    // int *p;
    int * const p;

    p = x;
    p++;
    return 0;
}
```
![](img/2020-01-08-09-04-09.png)
---

-
- if we need to assign some value to the const point 
- update

```c++
#include<stdio.h>

int main(){
    const double PI = 3.14;
    int x[] = {1, 2, 3};
    int * const p = x;

    p++; //this is illegal
    (*p)++; //this is legal
    return 0;
}
```


```c++
```

```c++
```
```c++
```

```c++
```
