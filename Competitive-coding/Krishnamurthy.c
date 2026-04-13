#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        digit = temp % 10;

        // Calculate factorial of digit
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
        printf("Krishnamurthy Number");
    else
        printf("Not a Krishnamurthy Number");

    return 0;
}
