/* In a small company there are 5 salesman. Each salesman is supposed to sell 3 products. Write a program using a 2D array to print 
i) The total sales by each salesman 
ii) total sales of each item */
//----------------------------------------------------------------------------------------

#include <stdio.h>

int main(){
    int n, row, col, total_sales=0, total_product=0, arr[5][3];
    
    for(row=0; row<5; row++){
        for(col=0; col<3; col++){
            printf("\n Enter the number of item %d that salesman %d sold: ", col+1, row+1);
            scanf("%d", &arr[row][col]);
        }
    }
    printf("\n Salesman\t\t item1 \t\t item2 \t\t item3 \n\t");
    for(row=0; row<5; row++){
        printf("%d\t\t", row+1);
        for(col=0; col<3; col++){
            printf("%d\t\t", arr[row][col]);
        }
        printf("\n\t");
    }
    // total sales by each salesman
    for(row=0; row<5; row++){
        for(col=0; col<3; col++){
            total_sales += arr[row][col];
        }
        printf("\n Total sales by salesman %d: %d",row+1, total_sales);
        total_sales = 0;
    }
    // total sales of each item
    for(col=0; col<3; col++){
        for(row=0; row<5; row++){
            total_product += arr[row][col];
        }
        printf("\n Total number of item %d: %d", col+1, total_product);
        total_product = 0;
    }
    
    return 0;
}