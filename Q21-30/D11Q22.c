// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main() {
    float cp, sp, Profit, Loss, Percent;
    
    printf("Enter Cost Price:");
    scanf("%f", &cp);
     printf("Enter Selling Price:");
    scanf("%f", &sp);
    
    if(sp>cp) {

    Profit = sp - cp;
    Percent = (Profit / cp) * 100;

    printf("Profit is %.2f\n, Profit");
    printf("Profit Percentage is %.2f\n, Percent"); 

} else if (cp>sp) {

    Loss = cp - sp;
    Percent = (Loss / cp) * 100;

    printf("Loss is %.2f\n, Loss");
    printf("Loss Percentage is %.2f\n, Percent");

} else {
    printf("no lose,no profit");
}

     return 0;
}