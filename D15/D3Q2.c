#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);

    //display before swapping
    printf("\nbefore swapping: a=%d, b=%d\n", a,b);

     //swap using third variable 
     c = a;
     a  = b;
     b = c;

      // display after swapping
      printf("after swaapping: a=%d, b=%d\n",a,b);
      return 0;
}