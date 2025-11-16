#include <stdio.h>

int main() { 

  // TEMPERATURE CONVERSION PROGRAM

  char choice = '\0';
  float fahrenheit = 0.0f;
  float celsius = 0.0f;

  printf("Temperature conversion program\n");
  printf("C. Celsius to Fahrenheit\n");
  printf("C. Fahrenheit to Celsius\n");
  printf("Is the temp in Celsius (C) or Fahrenheit (F)?: \n");
  scanf("%c", &choice);

  if (choice == 'C'){
    printf("Enter the Temperature in Celsius: \n");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;

    printf("%.1f Celsius is equal to %.1f Fahrenheit\n", celsius, fahrenheit);

  } else if (choice == 'F') {
    printf("Enter the Temperature in Fahrenheit: \n");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5/9;

    printf("%.1f Fahrenheit is equal to %.1f Celsius \n", fahrenheit, celsius);

  } else {
    printf("Invalid choice please select (C) or (F):");
  }
  return 0;
}