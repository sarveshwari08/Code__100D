// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};
int main() {
    struct Student student;

    // Read student details
    printf("Enter name: ");
    scanf("%s", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);
    printf("Enter marks: ");
    scanf("%d", &student.marks);

    // Print student details
    printf("Name: %s | Roll: %d | Marks: %d\n", student.name, student.roll_no, student.marks);

    return 0;
}