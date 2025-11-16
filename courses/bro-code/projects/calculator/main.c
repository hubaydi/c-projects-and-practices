#include <stdio.h>

int main() { 

  char operator = '\0';
  double num1 = 0.0;
  double num2 = 0.0;
  double result = 0.0;


  printf("Enter The first number:\n");
  scanf("%lf", &num1);

  printf("Enter The operator (+ - * /):\n");
  scanf(" %c", &operator); // clear the new line character from the buffer

  printf("Enter The second number:\n");
  scanf("%lf", &num2);

  switch (operator) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      if (num2 != 0) {
        result = num1 / num2;
      } else {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
      }
  }
  printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);


  return 0;
}