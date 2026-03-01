#include <stdio.h>

int main(){
    int n, New_num, i, j, arr[100];
    printf("\nEnter the number of array elemnts: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the new value that you want ot insert: ");
    scanf("%d", &New_num);

    for(i=0; i<n; i++){
        if(New_num < arr[i]){
            for(j=n-1; j>=i; j--){
                arr[j+1] = arr[j];
            }
            arr[i] = New_num;
            n+=1;
            break;
        }
    }

    printf("\nThe new array after insert the new elemnet in the array: ");
    for(i=0; i<n; i++){
        printf("\narr[%d]: %d", i,arr[i]);
    }
    return 0;
}