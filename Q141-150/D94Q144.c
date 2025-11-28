// Q144: Write a function that accepts a structure as parameter and prints its members.
/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92
*/
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %f\n", s.name, s.roll, s.marks);
}
int main() {
    struct Student s;
    printf("Enter name: ");
    scanf("%s", &s.name);

    printf("Enter roll no.: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printStudent(s);
    return 0;
}
