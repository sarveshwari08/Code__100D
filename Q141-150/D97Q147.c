// Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
void writeEmployeeToFile(const char *filename, struct Employee *emp) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return;
    }
    fwrite(emp, sizeof(struct Employee), 1, file);
    fclose(file);
}
void readEmployeeFromFile(const char *filename, struct Employee *emp) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return;
    }
    fread(emp, sizeof(struct Employee), 1, file);
    fclose(file);
}
int main() {
    struct Employee emp1, emp2;
    const char *filename = "employee.dat";

    // Input employee details
    printf("Enter employee name: ");
    scanf("%s", emp1.name);
    printf("Enter employee ID: ");
    scanf("%d", &emp1.id);
    printf("Enter employee salary: ");
    scanf("%f", &emp1.salary);

    // Write to file
    writeEmployeeToFile(filename, &emp1);

    // Read from file
    readEmployeeFromFile(filename, &emp2);

    // Display read employee details
    printf("Employee details read from file:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", emp2.name, emp2.id, emp2.salary);

    return 0;
}