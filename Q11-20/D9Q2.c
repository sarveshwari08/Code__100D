#include <stdio.h>
int main() {
    float grade,percentage;
    char A,B,C,D,F;
printf("enter the percentage:");
scanf("%f", &percentage);
 if (percentage>=90) {
    printf("grade A\n");
 } else if (percentage>=80) {
    printf("grade B\n");
 } else if (percentage>=70) {
    printf("grade C\n");
 } else if (percentage>=60) {
   printf("grade D\n");
 } else if (percentage<60) {
   printf("grade F\n"); }
 else {
    printf("invalid percentage\n");
 }
 return 0;
}