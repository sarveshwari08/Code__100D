//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed
*/
#include <stdio.h>
enum op {
    SUCCESSS,
    FAILURE,
    TIMEOUT,
};
int main(){
    enum op input;
    printf("Enter the outcome: ");
    switch(input) {
    case SUCCESSS: printf("Operation successfull"); break;
    case FAILURE: printf("Operation failed"); break;
    case TIMEOUT: printf("Operation incomplete"); break;
 }
}