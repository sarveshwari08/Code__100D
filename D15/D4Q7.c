#include <stdio.h>
int main() 
{
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    //display before swapping 

    printf("\nbefore swapping: a=%d, b=%d\n",a,b);

    //swap without using third variable 
    a = a+b; // sum of a and b is stored in a
    b = a-b; // b is assigned the value of original a
    a = a-b; // a is assigned the value of original b
    //display after swapping
    
    printf("after swapping: a=%d, b=%d\n",a,b);
    return 0;
}
