// Q58: Find the maximum and minimum element in an array.
/* Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1
Input 2:
3
10 10 10
Output 2:
Max=10, Min=10*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int element[n];

    for (int k = 0; k < n; k++) {
        printf("Enter value of element %d: ", k);
        scanf("%d", &element[k]);
    }
    int Max = element[0]; 
    int Min = element[0];

    for (int k = 1; k < n; k++) {
        if (element[k] > Max)
            Max = element[k];
        if (element[k] < Min)
            Min = element[k];
    }
    printf("Maximum = %d\n", Max);
    printf("Minimum = %d\n", Min);
    return 0;
}
