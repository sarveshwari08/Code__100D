// Q34: Write a program to check if a number is prime.
#include <stdio.h>
int main() {
    int p, primenum, i ;
    printf("Enter a positive number: ");
    scanf("%d", &p); 

    if (p<=0) {
        printf(" %d is not a prime number",p);
        return 0;
    }
    for( i = 2; i <= p/2; i++) {
        if (p % i == 0) {
            primenum = 0;
            break;
        }
    }
      if (primenum) {
        printf("%d is a prime number", p);
      } else {
        printf("%d is not a prime number", p);
      }
}