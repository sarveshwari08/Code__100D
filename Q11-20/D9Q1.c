#include <stdio.h>
#include <math.h>
 int main() {
    char quad;
    int d,b,a,c;
     // quadratic equation is apow(x,2) + bx +c =0
     a!=0;
     printf("the value of a\n,b\n,c\n:");
     scanf("%d %d %d", &a,&b,&c);
     d= (b*b) - (4*a*c);
     if (d>0) {
     printf("the roots are real and different\n");
     printf("roott1=%f\n", (-b + sqrt(d)) / (2*a));
     printf("root2=%f\n", (-b - sqrt(d))/(2*a));
     }
     else if (d==0) {
        printf("the roots are real and same\n");
        printf("root1=root2=%f\n", (-b)/(2*a));
 }  else {
    printf("the roots are complex and different\n");
    printf("root1=%f+%fi\n", (-b)/(2*a), sqrt(-d)/(2*a));
    printf("root2=%f-%fi\n", (-b)/(2*a), sqrt(- d)/(2*a));      
 } return 0;
}