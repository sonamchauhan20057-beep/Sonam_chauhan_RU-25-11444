#include <stdio.h>

int main() {
    int pin = 1234, enteredPin, choice;
    float balance = 10000.0, amount;

    printf("=================================\n");
    printf("        WELCOME TO ATM\n");
    printf("=================================\n");

    printf("Enter your ATM PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("\nIncorrect PIN! Access Denied.\n");
        return 0;
    }

    printf("\nPIN Verified Successfully!\n");

    do {
        printf("\n----------- ATM MENU -----------\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("--------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nCurrent Balance: ₹%.2f\n", balance);
                break;

            case 2:
                printf("\nEnter amount to deposit: ₹");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Amount Deposited Successfully!\n");
                } else {
                    printf("Invalid Amount!\n");
                }
                break;

            case 3:
                printf("\nEnter amount to withdraw: ₹");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                } else {
                    printf("Insufficient or Invalid Amount!\n");
                }
                break;

            case 4:
                printf("\nThank you for using ATM.\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while (choice != 4);
    printf("-----Thank you for using ATM Withdrawl Simulation !!!-----\n");
    printf("-----Developed by Sonam chauhan !!!-----\n");

    return 0;
}
