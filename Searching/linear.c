// Write a program to impliment the linear search 
#include <stdio.h>

int main(){
    int n, num, i, j, pos=-1, found=0, arr[20];
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);
    //initialize the array elements
    for(i=0; i<n; i++){
        printf("arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    // input searched number
    printf("\n Enter the number that has to be searched: ");
    scanf("%d", &num);
    
    //linear search
    for(i=0; i<n; i++){
        if( arr[i] == num){
            found = 1;
            pos = i;
            printf("\n %d is found in the array at the %d position", num, pos+1);
        }
    }
    if(found == 0)
        printf("\n  %d is not found in the array");
    return 0;
}
