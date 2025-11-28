//Q133:  enum months month;
#include <stdio.h>
#include <string.h>

enum months {
    JAN, FEB, MAR,APR,MAY,JUN,JULY,AUG,SEP,OCT,NOV,DEC
};
int main() {
    char input[10];
    printf("Enter the month: ");
    scanf("%s", input);

    char *name[] = {
        "JAN","FEB","MAR","APR","MAY","JUN","JULY","AUG","SEP","OCT","NOV","DEC"
    };
    int month = -1;
    for (int i=0; i<12 ;i++) {
     if(strcmp(input, name[i]) == 0) {
        month = i;
        break;
    }
 }
    if (month == -1) {
        printf("Invalid month\n");
        return 0;
    }
    switch (month){
        case JAN: printf("31 days"); break;
        case FEB: printf("28 or 29 days"); break;
        case MAR: printf("31 days"); break;
        case APR: printf("30 days"); break;
        case MAY: printf("31 days"); break;
        case JUN: printf("30 days"); break;
        case JULY:printf("31 days"); break;
        case AUG: printf("31 days"); break;
        case SEP: printf("30 days"); break;
        case OCT: printf("31 days"); break;
        case NOV: printf("30 days"); break;
        case DEC: printf("31 days"); break;

    }
}