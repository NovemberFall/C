//Calculating the number of records in a binary file using ftell
#include <stdio.h>
#include<stdlib.h>

//content of data.bin -> <BOF> 10.25, 5.54, 8.96, 12.45, 100.01 <EOF>
int main()
{
    FILE *fp;


    fp = fopen("/Users/Git/gitc/File_Handling/data_file/data.bin", "rb");
    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return 0;
    }
    long size;
    size = ftell(fp);
    printf("Size = %ld\n", size);

    fseek(fp, 0L, 2);
    size = ftell(fp);
    printf("Size = %ld\n", size);

    int n = size/sizeof(double);
    printf("Num of records: %d\n", n);

    double *data;
    data = (double *)malloc(sizeof(double) * n);
    fseek(fp, 0L, 0);

    fread((void *)data, sizeof(double), n, fp);

    for(int i=0; i<n; i++){
        printf("%10.2lf\n", data[i]);
    }

    printf("\n");
    fclose(fp);
    return 0;
}