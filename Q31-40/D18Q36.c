//Q36: Write a program to find the HCF (GCD) of two numbers.

#include<stdio.h>
int hcf(int a,int b){
    int temp;
    while(b!=0) {
    temp = b;
    b= a % b; 
    a = temp;
     } return a;
}
int main() {
    int x,y;
    printf("Enter two positive numbers ");
    scanf("%d%d", &x,&y);
    if(x,y==0){
    return 0;}
    if(x,y<0){
        printf("Enter positive integers only");
}
 printf("The HCF (GCD) of %d and %d is %d.", x, y, hcf(x,y));
    
    return 0;
}
