#include <stdio.h>

int main() {
    int a, b, i, lcm, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find LCM (simple method)
    for(i = 1; i <= a*b; i++) {
        if(i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }

    // Find GCD using formula
    gcd = (a * b) / lcm;

    printf("GCD = %d", gcd);

    return 0;
}
