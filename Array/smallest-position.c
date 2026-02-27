
// Write a program to print the position of the smallest number of a number using arrays.
#include <stdio.h>

int main(){
    int n, arr[20], i, smallest, position;
    printf("\nEnter number of element of the array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    smallest = arr[0];
    for(i=0; i<n; i++){
        if(smallest>arr[i]){
            smallest = arr[i];
            position = i;
        }
    }
    printf("\nThe smallest element in the array: %d", smallest);
    printf("\nThe position of the smallest element in the array: arr[%d]", position);
    return 0;
}