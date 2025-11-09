// Q69: Find the second largest element in an array.
/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40
*/
#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int firstLargest = -2147483648; // Minimum possible integer
    int secondLargest = -2147483648; // Minimum possible integer

    for (int i = 0; i < size; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -2147483648) {
        printf("No second largest element found.\n");
    } else {
        printf("%d\n", secondLargest);
    }
    return 0;
}