//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
enum traffic {
    RED,
    YELLOW,
    GREEN,
};
int main(){
  
  char lit;
  printf("Enter the number of Traffic light colour(RED-0,GREEN-2,YELLOW-1): ");
  scanf("%d", &lit);

  enum traffic light=lit;
  switch(light) {
  case RED: printf("Stop"); break;
  case YELLOW: printf("Wait"); break;
  case GREEN: printf("Go"); break;
   }
}