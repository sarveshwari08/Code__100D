//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};  
int main() {
    struct Student students[5];

    // Read details of 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
    }

    // Print the details of all students
    printf("\nDetails of Students:\n");
    printf("Name\tRoll\tMarks\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\t%.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}