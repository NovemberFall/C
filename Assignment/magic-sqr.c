#include <stdio.h>
/*
  Program written by Shibaji Paul, for Udemy course.
*/
int main(){
    int n;
    printf("Enter dimension of Magic Square (Only ODD dimension >=1 and <=15 accepted): ");
    scanf("%d", &n);
    if (n < 1 || n > 15 || n % 2 == 0){
        printf("Invalid input\n");
        printf("Valid values are odd integers between 1 and 15\n");
        return 0;
    }

    // otherwise we have valid integers
    // allocating 2D array with row and cols equals with n
    int magic[n][n];
    // we need to initialize each element of the array with 0
    int row, col;

    for(row = 0; row < n; ++row){
        for(col = 0; col< n; ++col){
            magic[row][col] = 0;
        }
    }

    row = n - 1;
    col = n/2;
    int k;
    for(k = 1; k <= n * n; ++k){

        magic[row][col] = k;
        // we need to keep the current values of both row and col
        int oldRow = row;
        int oldCol = col;

        // Now increment the row, if row is n then it should be 0
        row = (row + 1 ) % n;
        /*
            // for instructions 2 and 3
            instead of the above line you can do the following as well:
            row = row + 1;
            if (row == n){
                row = 0;
            }

        */
        // for 2 and 3 we need to increment column as well in the same way
        col = (col + 1) % n; // if col+1 is n then col will be 0, instruction step 4
        if (magic[row][col] != 0){
            row = oldRow;       // Instruction 5i
            col = oldCol; // Instruction 5 ii
			row--;              // Instruction 5 iii
        }


    } // end of for loop

    int magicConstant = n * (n * n + 1) / 2;

    // Now we need to display the magic square
    // while displaying we will check the sum of each row
    printf("The magic square: \n\n");
    int correct  = 1;  // assuming that it is correct magic square
    for(row = 0; row < n; ++row){
        int rowSum = 0;
        for(col = 0; col < n; ++col){
            printf("%4d", magic[row][col]);
            rowSum += magic[row][col];
        }
        printf("\n");
        if (rowSum != magicConstant){
            correct = 0;
        }
    }

    // Now check column sum
    for(col = 0; col < n; ++col){
        int colSum = 0;
        for(row = 0; row < n; ++row){
            colSum += magic[row][col];
        }
        if (colSum != magicConstant){
            correct = 0;
        }
    }

    // Now check the first diagonal sum
    int firstDiaSum = 0;
    for(row = 0, col = 0; row < n; ++row, ++col){
        firstDiaSum += magic[row][col];
    }
    if (firstDiaSum != magicConstant){
        correct = 0;
    }
    // Now check the second diagonal sum
    int secondDiaSum = 0;
    for(row = 0, col = n - 1; row < n; ++row, --col){
        secondDiaSum += magic[row][col];
    }
    if (secondDiaSum != magicConstant){
        correct = 0;
    }

    if (correct){
        printf("Magic square generated with dimension %d and magic constant: %d\n", n, magicConstant);
    }
    else{
        printf("Error in forming magic square with dimension %d\n", n);
    }
    return 0;
}
