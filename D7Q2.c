#include <stdio.h>
int main() {
    char al;
    printf("enter an alphabet:");
    scanf("%c", &al);
    if ( al=='a' || al=='e' || al=='i' || al=='o' || al=='u' || al=='A' || al=='E' || al=='I' || al=='O' || al=='U' ) {
        printf("the alphabet is a vowel");
    } else {
        printf("the alphabet is a consonant");
    }

}