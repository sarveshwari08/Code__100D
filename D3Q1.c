#include <stdio.h>
int main() 
{
    float celsius, farenheit;
    printf("enter the termperature in celsius:");
    scanf("%.2f", &celsius);
    farenheit = (celsius * 1.8) + 32.0;
    printf("temperature in farenheit is: %.2f\n",farenheit);
    return 0;
}