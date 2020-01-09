#include <stdio.h>

//content of data.bin -> <BOF> 10.25, 5.54, 8.96, 12.45, 100.01 <EOF>
int main()
{
    FILE *fp;
    double val;

    fp = fopen("/Users/Git/gitc/File_Handling/data_file/data.bin", "rb");
    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return 0;
    }

    fseek(fp, 2 * sizeof(double), SEEK_SET);
    fread((void *)&val, sizeof(double), 1, fp);

    printf("3rd rec: %lf\n", val);

    printf("\n");
    fclose(fp);
    return 0;
}