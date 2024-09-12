#include<stdio.h>
void test()
{
  int n;
  printf("enter the number : \n");
  scanf("%d",&n);
  if(n%2 == 0)
  {
    printf("the number is even");
  }
  else 
  {
    printf("the number is odd");
  }
}

int main(){
  test();
}
