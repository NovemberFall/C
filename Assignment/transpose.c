#include <stdio.h>

int main(){
    int n_rows, n_cols;

    printf("Enter number of rows for the matrix (>=3 and <=10): ");
    scanf("%d", &n_rows);
    // now check if the row is >=4 and <=10, if not
    // provide an error message and return from main
    if (n_rows < 3 || n_rows > 10){
        printf("Invalid number of rows, acceptable is >=3 and <=10");
        return 0;
    }

    printf("Enter number of columns for the matrix(>=3 and <=10): ");
    scanf("%d", &n_cols);
    // now check if the column is >=4 and <=10, if not
    // provide an error message and return from main
    if (n_cols < 3 || n_cols > 10){
        printf("Invalid number of columns, acceptable is >=3 and <=10");
        return 0;
    }

    // declare the array
    int mat[n_rows][n_cols];


    // dimension is good.
    // read data from user and place into matrix
    int rowIndex, colIndex;

    for(rowIndex = 0; rowIndex < n_rows; ++rowIndex){
        for(colIndex = 0; colIndex < n_cols; ++colIndex){
            // prompt to provide input for mat[rowIndex][colIndex]
            printf("Matrix[%d][%d]: ", rowIndex, colIndex);
            // read using scanf
            scanf("%d", &mat[rowIndex][colIndex]);
        }
    }

    // Now display the matrix as it is:
    printf("Matrix as given by you: \n");
    for(rowIndex = 0; rowIndex < n_rows; ++rowIndex){
        for(colIndex = 0; colIndex < n_cols; ++colIndex){
            printf("%6d", mat[rowIndex][colIndex]);
        }
        printf("\n");
    }
    printf("\n\n");

    // Now print the transpose
    printf("Transpose of the given matrix: \n");
    for(colIndex = 0; colIndex < n_cols; ++colIndex){
        for(rowIndex = 0; rowIndex < n_rows; ++rowIndex){
            printf("%6d", mat[rowIndex][colIndex]);
        }
        printf("\n");
    }
    printf("\n\n");


    return 0;
}
