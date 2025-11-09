//Q63: Merge two arrays.
/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5 */
#include<stdio.h>
int  main(){
    int i,k,j,x;
    printf("Enter the value of i ");
    scanf("%d",&i);
    printf("Enter the value of k ");
    scanf("%d",&k);
    int num[i], var[k];
    for(j = 0;j<i; j++){
        scanf("%d",&num[j]);        
    } 
    for(x = 0;x<k; x++){
        scanf("%d",&var[x]);        
    }  
    for(j = 0;j<i; j++){
        for(x = 0;x<k; x++){
    printf("%d %d",num[j],var[x]);
        }
    }
    return 0;
}  
