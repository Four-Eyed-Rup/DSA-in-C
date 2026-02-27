// Write a program to find the mean of n numbers using arrays 

#include <stdio.h>

int main(){
    int n, i, sum=0, arr[10];
    float mean;
    //initialize the array 
    printf("Enter the number of element in array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("\narr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    //sum of each element of the array 
    for(i=0; i<n; i++){
        sum += arr[i];
    }
    mean = (float)sum/2;
    printf("So the mean is: %.2f", mean);
    return 0;
}