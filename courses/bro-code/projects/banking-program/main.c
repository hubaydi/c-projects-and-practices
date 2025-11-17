#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
  // BANKING PROGRAM

  float balance = 0.0f;
  int choice = 0;

  printf("*** WELCOME TO THE BANKING PROGRAM ***\n");

  do {
    printf("\nSelect an option:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        checkBalance(balance);
        break;
      case 2:
        balance += deposit();
        break;
      case 3:
        balance -= withdraw(balance);
        break;
      case 4:
        printf("Exiting the program. Thank you!\n");
        break;
      default:
        printf("Invalid choice. Please try again.\n");
    }
  } while (choice != 4);

  return 0;
};

void checkBalance(float balance) {
  printf("Your current balance is: $%.2f\n", balance);
};
float deposit() {
  float amount = 0.0f;

  printf("Enter amount to deposit: $");
  scanf("%f", &amount);

  if (amount <= 0) {
    printf("Invalid amount. Deposit must be greater than $0.\n");
    return 0.0f;
  } else {
    printf("Successfully deposited $%.2f\n", amount);
    return amount;
  }
};
float withdraw(float balance) {
  float amount = 0.0f;

  printf("Enter amount to withdraw: $");
  scanf("%f", &amount);

  if (amount <= 0) {
    printf("Invalid amount. Withdrawal must be greater than $0.\n");
    return 0.0f;
  } else if (amount > balance) {
    printf("Insufficient funds. Your current balance is $%.2f\n", balance);
    return 0.0f;
  } else {
    printf("Successfully withdrew $%.2f\n", amount);
    return amount;
  }
};
