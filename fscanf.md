## fscanf

```c++
int number1, number2, number3, number4, c;

c = fscanf (spFile, "%d", &number1);
//c will be 1 in this case.

c = fscanf (spFile, "%d %d %d %d", &number1, &number1, &number3, &number4);
//in this case, c will return 4.

```

- So your first call to fscanf returns 1 because one input item (&number1) was 
  successfully matched with the format specifier %d. 
  Your second call to fscanf returns 4 because all 4 arguments were matched.


- The return value is not depending on the number of arguments to fscanf ,
  it depends on number of values successfully scanned by fscanf.
