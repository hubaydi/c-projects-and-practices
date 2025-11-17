#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main(){
  // ROCK PAPER SCISSORS GAME

  srand(time(NULL));

  printf("*** ROCK PAPER SCISSORS GAME\n");

  int userChoice = getUserChoice();
  int computerChoice = getComputerChoice();

  switch (computerChoice) {
    case 1:
      printf("Computer chose ROCK\n");
      break;
    case 2:
      printf("Computer chose PAPER\n");
      break;
    case 3:
      printf("Computer chose SCISSORS\n");
      break;
  }

  switch (userChoice) {
    case 1:
      printf("You chose ROCK\n");
      break;
    case 2:
      printf("You chose PAPER\n");
      break;
    case 3:
      printf("You chose SCISSORS\n");
      break;
  }

  checkWinner(userChoice, computerChoice);

  return 0;
}

int getComputerChoice() {
  return (rand() % 3) + 1;
};
int getUserChoice() {
  int choice = 0;
  do {
    printf("Enter your choice (1 = Rock, 2 = Paper, 3 = Scissors): ");
    scanf("%d", &choice);
  } while (choice < 1 || choice > 3);
  return choice;
};
void checkWinner(int userChoice, int computerChoice) {
  if (userChoice == computerChoice) {
    printf("It's a TIE!\n");
    return;
  } 
  
  if ((userChoice == 1 && computerChoice == 3) ||
    (userChoice == 2 && computerChoice == 1) ||
    (userChoice == 3 && computerChoice == 2)) {
    printf("YOU WIN!\n");
  } else {
    printf("COMPUTER WINS!\n");
  }
};
