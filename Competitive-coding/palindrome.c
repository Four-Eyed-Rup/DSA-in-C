// write a program to check palindrome or not

#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int x) {
    long remainder =0, result = 0, num;
    if(x < 0){
         printf("%d is not Palindrome ", x);
         return false;
    }
    num = x;
    
    while(num != 0){
        remainder = num%10;
        result = result * 10 + remainder;
        num /= 10;
    }
    if(x == result)
        return true;
    else
        return false;
}
int main(){
    int num;
    bool result;
    printf("\nEnter the number: ");
    scanf("%d", &num);
    result = isPalindrome(num);
    if(result)
        printf("%d is Palindrome", num);
    else
        printf("%d is not Palindrome ", num);
    return 0;
}
