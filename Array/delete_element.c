//Write a program to delete a number from a given location in an array

#include <stdio.h>

int main(){
    int n, pos, i, arr[20];
    printf("\nEnter the number of element in the array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the position to delete the element: ");
    scanf("%d", &pos);
    arr[pos] = 0;
    for(i=pos+1; i<n; i++){
        arr[i-1] = arr[i];
    }
    n-=1;
    for(i=0; i<n; i++){
        printf("\n arr[%d]: %d", i, arr[i]);
    }
    return 0;
}