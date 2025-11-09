// Q70: Rotate an array to the right by k positions.
/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3
*/
#include <stdio.h>
void rotateArray(int arr[], int size, int k) {
    k = k % size; // In case k is greater than size
    int temp[k];

    // Store the last k elements in a temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[size - k + i];
    }

    // Shift the rest of the elements to the right
    for (int i = size - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy the temporary array elements to the front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}