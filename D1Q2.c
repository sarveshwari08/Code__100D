#include <stdio.h>
int main() {
    int a, b;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);

    //calculations 
    int sum =a+b;
    int difference =a-b;
    int product =a*b;
    int  quotient =a/b;

    printf("\nsum is %d", sum);
    printf("\ndifference is %d",difference);
    printf("\nproduct is %d", product);

    // handle division safely
    if (b != 0) {
    int quotient=a/b;
    //integer quotient 
    printf("\nquotient is %d\n", quotient);
    } else {
        printf("\nquotient by zero is not allowed", quotient);
    }
   return 0;
}