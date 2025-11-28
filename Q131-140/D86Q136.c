//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/
#include <stdio.h>
enum operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};
int main() {
    char opStr[10];
    int a, b;
    enum operation op;

    // Read operation and two integers
    scanf("%s %d %d", opStr, &a, &b);

    // Map string input to enum
    if (strcmp(opStr, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(opStr, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if (strcmp(opStr, "MULTIPLY") == 0) {
        op = MULTIPLY;
    } else {
        printf("Invalid operation\n");
        return 1;
    }

    // Perform operation based on enum value
    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid operation\n");
            break;
    }

    return 0;
}