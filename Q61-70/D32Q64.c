//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/
#include <stdio.h>
int main() {
    long long number;
    int digitCount[10] = {0};
    int maxCount = 0, resultDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &number);
    while (number > 0) {
        int digit = number % 10;
        digitCount[digit]++;
        number /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            resultDigit = i;
        }
    }
    printf("%d\n", resultDigit);
    return 0;
}