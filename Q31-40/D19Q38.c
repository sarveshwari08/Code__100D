//Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>
int Sum(int a, int b);

int main(){
   int s, a,b;
   printf("Enter the values of a and b\n");
    scanf("%d %d",&a,&b);
   s = Sum(a,b);
    printf("Sum is %d\n",s);
}
int Sum(int a,int b) {
    int c;
    c = a+b;
    return c;
}