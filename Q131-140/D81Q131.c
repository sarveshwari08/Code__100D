//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6
*/
#include <stdio.h>
enum days{
SUNDAY,
MONDAY,
TUESDAY,
WEDNESDAY,
THRUSDAY,
FRIDAY,
SATURDAY,
};

int main() {
enum days day;
 for (day = SUNDAY; day <=SATURDAY; day++) {
    
     switch (day) {
        case SUNDAY: printf("SUNDAY = "); break;
        case MONDAY: printf("\nMONDAY = "); break;
        case TUESDAY: printf("\nTUESDAY = "); break;
        case WEDNESDAY: printf("\nWEDNESDAY = "); break;
        case THRUSDAY: printf("\nTHRUSDAY = "); break;
        case FRIDAY: printf("\nFRIDAY = "); break;
        case SATURDAY: printf("\nSATURDAY = "); break;
     } 
     printf("%d", day);
 }

} 