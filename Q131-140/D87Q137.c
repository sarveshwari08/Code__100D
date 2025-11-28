//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>
enum UserRole {
    ADMIN,
    USER,
    GUEST
};
int main() {
    char roleInput[10];
    enum UserRole role;

    // Read input role
    fgets(roleInput, sizeof(roleInput), stdin);
    // Remove newline character if present
    roleInput[strcspn(roleInput, "\n")] = 0;

    // Determine the role based on input
    if (strcmp(roleInput, "ADMIN") == 0) {
        role = ADMIN;
    } else if (strcmp(roleInput, "USER") == 0) {
        role = USER;
    } else if (strcmp(roleInput, "GUEST") == 0) {
        role = GUEST;
    } else {
        printf("Invalid role\n");
        return 1;
    }

    // Display message based on role
    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}