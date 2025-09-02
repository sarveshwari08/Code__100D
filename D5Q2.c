#include <stdio.h>
int main() {
    float seconds ,minutes , hour;
    printf("enter time in seconds:");
    scanf("%f", &seconds);

     minutes = seconds/60;
     hour = seconds/3600;
    printf("\ntime in minutes is %f", minutes);
    printf("\ntime in hours is %f", hour);
   return 0;
}