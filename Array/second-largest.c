#include <stdio.h>
int main(){
    int n, arr[20], i, largest, sec_largest, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for(i=0; i<n; i++){
        if(largest<arr[i]){
            largest = arr[i];
        }
    }
    sec_largest = arr[1];
    for(i=1; i<n; i++){
        if(arr[i] != largest){
            if(sec_largest<arr[i]){
            sec_largest = arr[i];
            position = i;
        }
        }
    }
    printf("\nThe second largesst number: %d", sec_largest);
    printf("\nposition: arr[%d]", position);
    return 0;
}