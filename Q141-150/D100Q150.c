// Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
void modifyStudent(struct Student *s) {
    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll no.: ");
    scanf("%d", &s->roll);

    printf("Enter marks: ");
    scanf("%f", &s->marks);
}
void printStudent(struct Student *s) {
    printf("Modified Data: Name: %s | Roll: %d | Marks: %.0f\n", s->name, s->roll, s->marks);
}
int main() {
    struct Student s;
    modifyStudent(&s);
    printStudent(&s);
    return 0;
}
