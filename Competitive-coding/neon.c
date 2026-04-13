/^
  logic
  9² = 81  
8 + 1 = 9  is called Neon number
*/
#include <stdio.h>

int main() {
    int n, square, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    square = n * n;

    while(square > 0) {
        digit = square % 10;
        sum = sum + digit;
        square = square / 10;
    }

    if(sum == n)
        printf("Neon Number");
    else
        printf("Not a Neon Number");

    return 0;
}
