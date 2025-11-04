/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/
 
#include <stdio.h>
int main() {
    int days,late_fine;
    printf("Enter the number of late days:\n");
    scanf("%d", &days);
    
    if(days<=5) {
        late_fine = (days*2);
        printf("The late fine is ₹ %d\n", late_fine);
        
     } else if(days>5 && days<=10) {
        late_fine =(5*2)+((days-5)*4); 
         printf("The latee fine is ₹ %d\n", late_fine);
           
        }
        else if(days>10 && days<=30) {
            late_fine = (5*2)+(5*4) +((days-10)*6);
            printf("The late fine is ₹ %d\n", late_fine);

        }  else if (days>30) {
            printf("membership cancelled ");

        } else {
            printf("no result");
        }
     return 0;
}
    