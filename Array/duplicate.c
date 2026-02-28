//Write a program to find wheather the array of integers contains a duplicate number

#include <stdio.h>

int main(){
    int i, n, j, arr[20], flag= 0;
    printf("\n Enter the size of the array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("\n arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        for(j=1; j<n; j++){
            if(arr[i] == arr[j] && i!=j){
                flag = 1;
                printf("\n Duplicate numbers found at locations %d and %d", i, j);
            }
        }
    }
    if(flag==0)
        printf("\n No duplicates found");
    return 0;
}