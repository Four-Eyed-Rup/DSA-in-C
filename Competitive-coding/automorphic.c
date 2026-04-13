/*
logic
25² = 625 → ends with 25 is called automorphic
*/

#include <stdio.h>

int main() {
    int n, square, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    square = n * n;
    temp = n;

    while(temp > 0) {
        if(temp % 10 != square % 10) {
            printf("Not an Automorphic Number");
            return 0;
        }
        temp = temp / 10;
        square = square / 10;
    }

    printf("Automorphic Number");

    return 0;
}
