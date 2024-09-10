#include <stdio.h>
int main() 
{
    int a, b;
    char oper;

     printf("Enter the number 1: ");
     scanf("%d", &a);

     printf("Enter the number 2:");
     scanf("%d", &b);

     printf("Enter the operation ( +, -, *, /): ");
     scanf(" %c", &oper);
  switch(oper) {
      case '+':
      printf("The sum is%d\n", a + b);
    break;
      case '-':
          printf("The subtraction is %d\n", a-b);
          break;
      case '*':
          printf("the Multiplication is %d\n",a*b);
          break;
          case'/':
      if (b != 0) {
                printf("The divison is %d\n", a / b);
        } else {


            printf("Error: Division by zero is not allowed.\n");
      }
}
}