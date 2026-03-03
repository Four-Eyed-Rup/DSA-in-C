#include <stdio.h>

int main(){
    int i, j, k, row1, col1, row2, col2, arr1[10][10], arr2[10][10], product[10][10];
    printf("\n Enter the number of rows in first matrix: ");
    scanf("%d", &row1);
    printf("\n Enter the number of columns in first matrix: ");
    scanf("%d", &col1);
    
    // Assigning first matrix elements
    printf("\n Enter elements of first matrix: \n");
    for(i=0; i<row1; i++){
        for(j=0; j<col1; j++){
            printf("arr[%d][%d]: ", i+1, j+1);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n Enter the number of rows in second matrix: ");
    scanf("%d", &row2);
    printf("\n Enter the number of columns in second matrix: ");
    scanf("%d", &col2);
    printf("\n Enter elements of second matrix: \n");
    for(i=0; i<row2; i++){
        for(j=0; j<col2; j++){
            printf("arr[%d][%d]: ", i+1, j+1);
            scanf("%d", &arr2[i][j]);
        }
    }

    //display matrix 1
    printf("\n First Matrix---------------------------\n");
    for(i=0; i<row1; i++){
        for(j=0; j<col1; j++){
            printf("%d \t", arr1[i][j]);
        }
        printf("\n");
    }
    //display matrix 2
    printf("\n Second Matrix---------------------------\n");
    for(i=0; i<row2; i++){
        for(j=0; j<col2; j++){
            printf("%d \t", arr2[i][j]);
        }
        printf("\n");
    }

    //matrices multiplication
    for(i=0; i<row1; i++){
        for(j=0; j<col2; j++){
            product[i][j] = 0;
            for(k=0; k<row2; k++){
                product[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    } 
    printf("\n Product Matrix---------------------------\n");
    for(i=0; i<row1; i++){
        for(j=0; j<col2; j++){
            printf("%d \t", product[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}