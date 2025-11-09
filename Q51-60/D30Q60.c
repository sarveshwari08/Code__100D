// Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include<stdio.h>
int main(){
    int i, pos=0,neg=0,zero=0;
    printf("Enter the value of i ");
    scanf("%d",&i);
    int num[i];
    for(int j=0;j<i;j++){
        printf("Enter the value of elements %d\n",j);
        scanf("%d", &num[j]);
    }
    for(int j=0;j<i;j++){
        if(num[j]>0)
        pos++;
        if(num[j]<0)
        neg++;
        if(num[j]=0)
        zero++;
    } printf("Positive Numbers = %d\n", pos);
    printf("Negative Numbers = %d\n", neg);
    printf("zeros = %d\n",zero);
}