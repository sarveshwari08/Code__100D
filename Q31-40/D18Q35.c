// Q35: Write a program to print all factors of a given number.

#include <stdio.h>
#include <stdlib.h>

void printFactors(int n) {
    if (n == 0) {
        printf("Every non-zero integer is a factor of 0.\n");
        return;
    }
    int absN = abs(n); // Work with absolute value for factor calculation
    printf("Factors of %d are: ", n);

    for (int i = 1; i <= absN; i++) {
        if (absN % i == 0) {
            printf("%d ", i);
            if (n < 0) {
                printf("%d ", -i); // Include negative factors for negative numbers
            }
        }
    }
    printf("\n");
}
int main() {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    printFactors(num);
    return 0;
}
