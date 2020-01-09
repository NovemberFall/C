#include <stdio.h>

int main()
{
    FILE *fp;
    double data[5];

    fp = fopen("/Users/Git/gitc/File_Handling/data_file/data.bin", "rb");
    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return 0;
    }

    int nObject = fread((void *)(data), sizeof(double), 5, fp);
    printf("Total elements written: %d\n", nObject);

    int i;
    printf("Content of array: ");
    for(i=0; i<5; i++){
        printf("%10.2lf", data[i]);
    }
    printf("\n");
    fclose(fp);
    return 0;
}