// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>
int main() {
    int a;
    printf("enter the numbers(1-12)\n");
    scanf("%d", &a );
     switch (a) {
        case 1 : 
        printf("January,31Days\n");
        break;
        case 2 : 
        printf("February,28Days\n");
        break;
        case 3 : 
        printf("March,31Days\n");
        break;
        case 4 : 
        printf("April,30Days\n");
        break;
        case 5 : 
        printf("May,31Days\n");
        break;
        case 6 : 
        printf("June,30Days\n");
        break;
        case 7 : 
        printf("July,31Days\n");
        break;
        case 8 : 
        printf("August,30Days\n");
        break;
        case 9: 
        printf("September,31Days\n");
        break;
        case 10 : 
        printf("October,31Days\n");
        break;
        case 11 : 
        printf("Novenber,30Days\n");
        break;
        case 12 : 
        printf("december,31Days\n");
        break;
    } return 0;
    }
