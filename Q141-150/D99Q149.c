// Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
void printStudent(struct Student *s) {
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s->name, s->roll, s->marks);
}
int main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll no.: ");
    scanf("%d", &s->roll);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    printStudent(s);
    free(s);
    return 0;
}
