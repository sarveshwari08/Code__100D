// Find the sum of array elements
#include <stdio.h>
int main(){
    int i,sum=0;
     printf("enter the value of i\n");
  scanf("%d", &i);
  int element[i];
  for (int k = 0; k < i; k++) {
    printf("Enter the value of %d element\n", k);
    scanf("%d", &element[k]);
  }
  for(int k = 0; k < i; k++){
    sum = sum + element[k];
  } printf("The sum of all the elementds is %d", sum);
  return 0;
}
