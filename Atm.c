#include <stdio.h>

int main() {
    float balance = 5000.0;
    float withdraw_amount;

    printf("Welcome to Bhanu's Smart ATM!\n");
    printf("Your current balance is: $%.2f\n", balance);

    printf("Enter the amount you want to withdraw: ");
    scanf("%f", &withdraw_amount);

    if (withdraw_amount <= balance) {
    printf("Transaction Successful!\n");
} else {
    printf("Error: transaction failed!\n");
}

}