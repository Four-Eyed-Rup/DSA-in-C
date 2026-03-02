// Write a program to merge two unsorted arrays to a sorted array

#include <stdio.h>

int main (){
    int n1, n2, total, temp, i, j, count=0, arr1[20], arr2[20], merge_arr[50];
    printf("\nEnter the number of elements in the first array: ");
    scanf("%d", &n1);
   

    printf("\n Enter the elements of the first array: ");
    for(i=0; i<n1; i++){
        printf("\n arr[%d]: ", i);
        scanf("%d", &arr1[i]);
    }
     printf("\nEnter the number of elements in the second array: ");
    scanf("%d", &n2);

    printf("\n Enter the elements of the second array: ");
    for(i=0; i<n2; i++){
        printf("\n arr[%d]: ", i);
        scanf("%d", &arr2[i]);
    }
    total = n1+n2;
    // First array elemnts copy 
    for(i=0; i<n1; i++){
        merge_arr[i] = arr1[i];
        count ++;
    }
    // Second array elemnts copy 
    for(i=0; i<n2; i++){
        merge_arr[count] = arr2[i];
        count++;
    }
    // sorting part 
    for(i=0; i<total; i++){
        for(j=i+1; j<total; j++){
            if(merge_arr[i] > merge_arr[j]){
                temp = merge_arr[i];
                merge_arr[i] = merge_arr[j];
                merge_arr[j] = temp;
            }
        }
    }
    printf("\n The sorted merge array:");
    for(i=0;i<total; i++){
        printf("\n arr[%d]: %d", i, merge_arr[i]);
    }
    return 0;
}