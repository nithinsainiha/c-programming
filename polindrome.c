#include <stdio.h>
int main(){ 
  int n, originalnum,reversednum=0,remainder,iteration=1;
  printf("enter a number: ");
  scanf("%d",&n);
  originalnum=n;
  while(n!= 0){
    remainder=n %10;
    reversednum=reversednum*10+remainder;
  printf("iteration %d: %d\n", iteration, remainder, reversednum);
    n/=10;
    iteration++;
  }
  if(originalnum==reversednum)
    printf("%d is a palindrome number\n", originalnum);
  else
  printf("%d is not a palindrome number\n", originalnum);
  return 0;
}

