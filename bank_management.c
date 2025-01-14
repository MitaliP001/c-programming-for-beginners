#include <stdio.h>

float balance = 0.0;

void deposit() {
    float amount;
    printf("Enter deposit amount: ");
    scanf("%f", &amount);
    balance += amount;
    printf("Deposited: %.2f\n", amount);
}

void withdraw() {
    float amount;
    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);
    if (amount > balance)
        printf("Insufficient balance\n");
    else {
        balance -= amount;
        printf("Withdrew: %.2f\n", amount);
    }
}

void check_balance() {
    printf("Current balance: %.2f\n", balance);
}

int main() {
    int choice;
    while(1) {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: deposit(); break;
            case 2: withdraw(); break;
            case 3: check_balance(); break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
