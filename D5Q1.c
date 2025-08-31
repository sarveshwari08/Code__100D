#include <stdio.h>
#include <math.h>
int main() {
    float principal,rate, time, simple_interest, compound_interest;

    printf("Enter principal, rate and time:\n");
    scanf("%f%f%f", &principal, &rate, &time); 

    simple_interest = (principal * rate * time) / 100;
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;
    
    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);
    return 0;
}