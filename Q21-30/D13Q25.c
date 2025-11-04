/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/

#include <stdio.h>
int main() {
    float a,b,result;
    char op;            
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b); 
    printf("Enter an operator :\n");
    scanf(" %c", &op);
     switch (op)
     {
     case '+':
              result = a+b;
              printf("result:%.2f\n",result);
        break;

        case '-':
            result = a-b;
            printf("result:%.2f\n",result);
        break;

        case '*':
             result = a*b;
             printf("result:%.2f\n",result);
        break;

        case '/':
            if (b != 0) {
                
                printf("%.2f\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;

        case '%':
            if (b != 0) {
                
                printf("%.2f\n", result);
            } else {
                printf("Error: Modulo by zero\n");
            }
            break;

        default:
            printf("Invalid operator\n");
    } return 0;
}