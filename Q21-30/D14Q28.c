// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)
Input 2:
6
Output 2:
48 (2 * 4 * 6)
*/
#include <stdio.h>
int main() {
    int n, i,  Product = 0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    printf("The Product of even numbers from 1 to %d is: ", n);
     Product = 1;

    for(i=2; i<=n; i=i+2){  
        printf("%d * ", i);
          Product =  Product * i;

    }
     printf("\nProduct = %d\n", Product);
}