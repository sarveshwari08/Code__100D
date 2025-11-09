// Q56: Read and print elements of a one-dimensional array.
#include <stdio.h>
int main(){
  int i;
  printf("enter the value of i\n");
  scanf("%d", &i);
  int element[i];
  for (int k = 0; k < i; k++)
  {
    printf("Enter the value of %d element\n", k);
    scanf("%d", &element[k]);
  }
  for (int k = 0; k < i; k++)
  {
    printf("The value  of %d element is %d\n", k, element[k]);
  }
  return 0;
}