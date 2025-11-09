// Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>
int main() {
    int palindrome, n,remainder, original, reversed=0;
    printf("Enter the number: ",n);
    scanf("%d", &n);
    original =n;

    while(n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

     if (original == reversed){
        printf("%d is Palindrome", original);
     }
      else {
        printf(" %d is not Palindrome",original);
     }
}