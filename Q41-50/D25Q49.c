// Q49: Write a program to print the following pattern: 
/* 5
45
345
2345
12345
*/
#include <stdio.h>
int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; i++) {
        
        for (int j = i; j < n; j++) {
            printf(" ");
        }
    
        for (int k = n - i + 1; k <= n; k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}