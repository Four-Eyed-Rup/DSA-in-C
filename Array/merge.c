#include <stdio.h>

int main(){
    int n1, n2, count=0, i, total, arr1[10], arr2[10], merge_arr[20];
    printf("\nEnter the number of element of the first array: ");
    scanf("%d", &n1);
    printf("\nEnter the number of element of the second array: ");
    scanf("%d", &n2);
    total = n1+n2;

    printf("\nEnter the elements of the first array: ");
    for(i=0; i<n1; i++){
        printf("\n arr[%d]: ", i);
        scanf("%d", &arr1[i]);
        
    }

    printf("\nEnter the elements of the second array: ");
    for(i=0; i<n2; i++){
        printf("\n arr[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    for(i=0; i<n1; i++){
        merge_arr[i] = arr1[i];
        count++;
    }

    for(i=0; i<n2; i++){
        merge_arr[count] = arr2[i];
        count++;
    }

    printf("\n The mergered array elements: ");
    for(i=0; i<total; i++){
        printf("\n arr[%d]: %d", i, merge_arr[i]);
    }
    return 0;

}
