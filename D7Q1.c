#include <stdio.h>
int main() {
    int a;
printf("enter a four digit number:");
scanf("%d", &a);
if (a%4==0) {
    if (a%100==0) {
        if (a%400==0) {
            printf("the year is a leap year\n");
        } else  {
            printf("the year is not a leap year\n");
        }  
     } else {
        printf("the year is a leap year\n");
     } 
    } else {
        printf("the year is not a leap year\n");}
        return 0;
}