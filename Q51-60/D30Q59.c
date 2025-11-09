// Q59: Count even and odd numbers in an array.
/*Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3
Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0 */
#include <stdio.h>
int main(){
    int i, even=0,odd=0;
    printf("Enter the value of i ");
    scanf("%d",&i);
    int num[i];
    for(int j=0;j<i;j++){
        printf("Enter the value of elements %d\n",j);
        scanf("%d", &num[j]);
    }
    for(int j=0;j<i;j++){
       if(j % 2 == 0 )
       even ++;
       if(j % 2 != 0)
       odd++;
    } 
    printf("Even Numbers = %d ", even);
    printf("Odd Numbers = %d", odd);
    return 0;
}
