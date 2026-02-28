//Write a program to enter n number of digits. Form a number using these digits.

#include <stdio.h>
#include <math.h>
int main(){
    int digit, i, arr[20], number=0;
    printf("\nEnter the number of digit: ");
    scanf("%d",&digit);

    for(i=0; i<digit; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for(i=0; i<digit; i++){
        number = number + arr[i]*pow(10,i);
    }
    printf("Number: %d", number);
    return 0;
}