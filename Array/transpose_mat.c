// Write a program for transpose of a matrix

#include <stdio.h>

int main(){
    int i, j, row, col, arr[20][20], transpose[20][20];

    printf("\n Enter matrix row: ");
    scanf("%d", &row);
    printf("\n Enter matrix column: ");
    scanf("%d", &col);

    printf("\n Enter the elements of the array:");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("\n arr[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n Matrix ------------------------------------\n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
    // Transpose Logic
    for(i=0; i<col; i++){
        for(j=0; j<row; j++){
            transpose[i][j] = arr[j][i];
        }
    }

    printf("\n Transpose matrix ---------------------------\n");
    for(i=0; i<col; i++){
        for(j=0; j<row; j++){
            printf("%d \t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}