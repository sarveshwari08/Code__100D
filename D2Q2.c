#include <stdio.h>
#define pi 3.14

int main() {
    float radius,area,circumference;
    printf("enter the radius of the circle: ");
    scanf("%f", &radius);
    area =pi*radius*radius;
    circumference = 2*pi*radius;
    printf("area of circle is: %.2f\n", area);
    printf("circumference of circle is: %.2f\n",circumference);
    return 0;
}