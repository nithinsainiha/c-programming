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
  if (oper == '+') {
      printf("The sum is%d\n", a + b);
  }
    else if (oper == '-') {
        printf("The difference is%d\n", a - b);
    }
    else if (oper == '*') {
        printf("The product is%d\n", a * b);
    }
    else if (oper == '/') {
        if (b != 0) 
        {
            printf("The divison is %d\n", a / b);
        } else 
        {
            printf("Error: Division by zero is not allowed.\n");
        }


}  
}




