// Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>
int main() {
    int n, i,  factorial;
    printf("Enter the value of n ",n);
    scanf("%d", &n);
    printf("The factorial of %d is ",n);
    factorial = 1;

    for(i=1; i<=n; i++) {
        printf("%d * ",i);
     factorial = factorial * i;
    } 
    printf("\nfactorial = %d\n", factorial);
    return 0;
}