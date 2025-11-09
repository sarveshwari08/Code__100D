// Q61: Search for an element in an array using linear search.
/*Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2
Input 2:
4
10 20 30 40
25
Output 2:
-1*/
#include <stdio.h>
int main() {
    int i, k, index = -1;
    printf("Enter the value of i ");
    scanf("%d", &i);
    int num[i];
    for (int j = 0; j < i; j++)
    {
        printf("Enter the value of number %d\n", j);
        scanf("%d", &num[j]);
    }
    for (int j = 0; j < i; j++)
    {
        printf("Enter the value of the element ");
        scanf("%d", &k);
        if (num[j] == k)
            index = j;
        break;
    }
    if (index != -1)    
        printf("Number found at index %d", index);    
    else            
        printf("Number not found in the array");   
    return 0;
}
