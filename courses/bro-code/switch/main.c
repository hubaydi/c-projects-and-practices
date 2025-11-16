#include <stdio.h>

int main() { 

  int dayOfTheWeek = 0;

  printf("Enter a day of the Week:\n");
  scanf("%d", &dayOfTheWeek);

  switch(dayOfTheWeek){
    case 1:
      printf("Its Saturday");
      break;
    case 2:
      printf("Its Sunday");
      break;
    case 3:
      printf("Its Monday");
      break;
    case 4:
      printf("Its Tuesday");
      break;
    case 5:
      printf("Its Wednesday");
      break;
    case 6:
      printf("Its Thursday");
      break;
    case 7:
      printf("Its Friday");
      break;
    default:
      printf("Invalid");

  }
  return 0;
}