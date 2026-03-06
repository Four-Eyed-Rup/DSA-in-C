// Write a program to search an element in an array using interpolation search

#include <stdio.h>
#define MAX 20

//interpolation searching function 
int interpolation_search(int arr[], int low, int high, int val){
    int mid;
    
    while(low<=high){
        //interpolation searching formula for mid
        mid = low + (high-low) * ((val-arr[low]) / (arr[high]-arr[low])); 
        if(val == arr[mid])
            return mid;
        else if(val > arr[mid])
            low = mid +1;
        else
            high = mid-1;
    }
    return -1;
}

int main(){
    int i, n, val, pos = -1, arr[MAX];
    printf("\n Enter the number of elements: ");
    scanf("%d", &n);

    //initializing array elements
    for(i=0; i<n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n Enter the value that to be searched: ");
    scanf("%d", &val);

    //position found
    pos = interpolation_search(arr, arr[0], arr[n-1], val);
    
    if(pos == -1)
        printf("\n %d is not found in the array");
    else
        printf("\n %d is found at position %d", val, pos);
    return 0;
}