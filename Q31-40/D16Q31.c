// Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main() {
    int n,i=0, binaryrep=0,rem, remainder;
    printf("Enter the number: ",n);
    scanf("%d",&n);
    printf("The Equivalent Binary Represtation of %d is ",n);
    
    while(n != 0) {
     rem = n % 2 ;
     printf("%d", rem); 
     i =i*10+ rem;
     n = n/2 ;
    }
     printf("\n%d\n", i);

     while (i!=0) {
        remainder = i % 10;
       binaryrep  = binaryrep * 10 + remainder;
        i /= 10;
     } printf("\nBinary representation is %d\n ", binaryrep);

    
}