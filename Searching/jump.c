// Write a program to search a number in an array by using jump search
#include <stdio.h>
#include <math.h>
int jump_search(int arr[], int val, int n){
    int i, step, temp, beg;
    step = sqrt(n);
    temp = step;

    //  step jump 
    for(i=0; i<step; i++){
                        
        if(arr[step] < val){
            beg = step+1;           //begining of the block
            step += temp;           //block incrementation
        }
        else
            beg = 0;
    }

    //linear search
    for(i=beg; i<=step; i++){
        if(arr[i] == val){          
            return i;
            //break;
        }
    }
    return -1;
}
int main(){
    int i, n, val, pos=-1,  arr[20];
    printf("\n Enter the number of elements of array: ");
    scanf("%d", &n);
    printf("\n Enter values of array elements: \n");
    for(i=0; i<n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n Enter the value to be searched: ");
    scanf("%d", &val);
    pos = jump_search(arr, val, n);
    if(pos == -1)
        printf("\n %d is not found in the array", val);
    else
        printf("\n %d is found at position %d", val, pos);
    return 0;
}