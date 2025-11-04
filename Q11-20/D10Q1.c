// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main() {
    float a,b,c;
    printf("enter the three sides of triangle");
    scanf("%f%f%f", &a,&b,&c);
     if (a==b && b==c) {
        printf("the triangle is an equilateral triangle\n");
     } else if (a==b && b!=c || a!=b && b==c) {
        printf("the triangle is an isosceles triangle\n");
     } else {
        printf("the triangle is a scalene triangle\n");
     } return 0;
}