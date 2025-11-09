// Q39: Write a program to find the product of odd digits of a number.

#include<stdio.h> 
int main(){
    int n, digit = n % 10, product=1;
    int odd;
    printf("Enter a Number ");
    scanf("%d",&n);
    while(n != 0){
        if(digit % 2 != 0){
            product *= digit;
            odd = 1; 
        }
            n /= 10;     
    }
    if(odd){
        printf("The Product of odd digits in %d is %d", n, product);
    } else {
        printf("There are no odd digits in the number");
    } return 0;
}