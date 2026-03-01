//White a program to insert a number at a given location in an array 

#include <stdio.h>

int main(){
    int i, n, pos, New_num, arr[20];
    printf("\nEnter the number of array elements: ");
    scanf("%d", &n);

    //assign array elements
    for(i=0; i<n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the value that you want to insert: ");
    scanf("%d", &New_num);
    printf("\nEnter the position of the new value: ");
    scanf("%d", &pos);

    for(i=n-1; i>=pos; i--){
        arr[i+1] = arr[i];   
    }
    arr[pos] = New_num;
    n= n+1;
    printf("\nNew array elements------------------");
    for(i=0; i<n; i++){
        printf("\n arr[%d]: %d", i, arr[i]);
    }
    return 0;
}