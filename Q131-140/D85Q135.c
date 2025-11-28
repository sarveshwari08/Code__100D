// Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include <stdio.h>
enum val {
    A=10,
    B,
    C
};
int main() {
    enum val values;
    for(values =A ;values <= C; values++)
    {
    switch(values){
        case A: printf("A="); break;
        case B: printf("\nB="); break;
        case C: printf("\nC="); break;
    } printf ("%d", values);
}
}