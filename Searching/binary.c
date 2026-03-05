// Write a program to impliment the bubble sort 

#include <stdio.h>

int main(){
    int n, num, i, beg, end, mid, pos, found = 0, arr[20];
    printf("\n Enter the number of elements of array: ");
    scanf("%d", &n);

    // initialize array elements 
    for(i=0; i<n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    beg = arr[0];
    end = arr[n-1];
    mid = (beg+end)/2;

    printf("\n Enter the number has to be searched: ");
    scanf("%d", &num);

    //bubble sort
    for(i=0; i<n; i++){
        mid = (beg+end)/2;
        pos = i; 
        if( num == arr[mid]){
            found = 1;
            printf("\n %d is found at %d position", num, pos+1);
            break;
        }
        
        else if(arr[mid] > num){
            end = mid-1;
        }
        else{
            beg = mid + 1;
        }
    }
    if(found == 0)
        printf("\n %d is not found in the array", num);
    return 0;
}