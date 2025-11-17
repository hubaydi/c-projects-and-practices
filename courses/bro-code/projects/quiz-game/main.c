#include <stdio.h>
#include <ctype.h>

int main() {
  char questions[4][100] = {
    "What is the capital of France?\n",
    "What is 2 + 2?\n",
    "What is the largest planet in our solar system?\n",
    "Which element has the chemical symbol 'O'?\n"
  };

  char options[4][100] = {
    "A) Berlin\nB) Madrid\nC) Paris\nD) Rome\n", 
    "A) 3\nB) 4\nC) 5\nD) 6\n", 
    "A) Earth\nB) Mars\nC) Jupiter\nD) Saturn\n",
    "A) Gold\nB) Oxygen\nC) Silver\nD) Iron\n"
  };

  char questionCount = sizeof(questions) / sizeof(questions[0]);

  char answers[4] = {'C', 'B', 'C', 'B'};
  char userAnswer = '\0';
  int score = 0;

  printf("*** Welcome to the Quiz Game!\n\n");

  for (int i = 0; i < questionCount; i++) {
    printf("%s", questions[i]);
    printf("%s", options[i]);
    printf("Your answer: ");
    scanf(" %c", &userAnswer);

    userAnswer = toupper(userAnswer);

    if (userAnswer == answers[i]) {
      printf("Correct!\n\n");
      score++;
    } else {
      printf("Wrong! The correct answer was %c.\n\n", answers[i]);
    }
  }

  printf("Your total score is: %d out of %d\n", score, questionCount);
  return 0;
}

