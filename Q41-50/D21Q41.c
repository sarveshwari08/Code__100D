// Q41: Write a program to swap the first and last digit of a number.
/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231
Input 2:
1001
Output 2:
1001
*/
#include <stdio.h>
#include <math.h>
int swapFirstAndLastDigit(int num) {
      if (num < 10) {
        return num;
    }

    int lastDigit = num % 10;
    int firstDigit = num;
    int digitsCount = 0;

    // Find the first digit and count the number of digits
    while (firstDigit >= 10) {
        firstDigit /= 10;
        digitsCount++;
    }
    digitsCount++; // To account for the first digit

  int firstDigitPlaceValue = (int)pow(10, digitsCount - 1);

    int middlePart = (num % firstDigitPlaceValue) / 10;
    
    int swappedNum = lastDigit * firstDigitPlaceValue + middlePart * 10 + firstDigit;

    return swappedNum;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = swapFirstAndLastDigit(number);
    printf("Number after swapping first and last digit: %d\n", result);

    return 0;
}
