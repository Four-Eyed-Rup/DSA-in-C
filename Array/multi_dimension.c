// Write a program to implement the multi-dimensional array

#include <stdio.h>
int main(){
    int i, j, k, n, row, col, arr[10][10][10];
    printf("\n Enter the number of 2D matrices: ");
    scanf("%d", &n);
    printf("\n Enter the row of the matrix: ");
    scanf("%d", &row);
    printf("\n Enter the column of the matrix: ");
    scanf("%d", &col);

    for(i=0; i<n; i++){
        for(j=0; j<row; j++){

            for(k=0; k<col; k++){
                printf("\n arr[%d][%d][%d]: ", i+1, j+1, k+1);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    for(i=0; i<n; i++){
        printf("\n Matrix %d-----------------------------------------------", i+1);
        for(j=0; j<row; j++){
            printf("\n");
            for(k=0; k<col; k++){
                printf("%d \t", arr[i][j][k]);
            }
        }
    }
    return 0;
}