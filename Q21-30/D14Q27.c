//Q27: Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {

    int n, i, sum=0;
    printf("Enter the numbers of odd numbers to be added: \n");
    scanf("%d",&n);
    printf("The Sum of the first %d odd Numbers is: ",n);

    for (i=1; i<=n ;i++){

        printf("%d + ",2*i-1);
        sum = sum + (2*i-1);
    }
     printf("\nSum = %d\n",sum);

    return 0;
}