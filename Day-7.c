#include <stdio.h>

int main() {
    int choice;
    float balance = 10000, amount, bonus;

    printf("smart bank account manager\n");

    do {
        printf("\n1. deposit money\n");
        printf("2. withdraw money\n");
        printf("3. check balance\n");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount > 0) {
                bonus = 0;
                if (amount > 25000) {
                    bonus = amount * 0.01;
                    printf("bonus of ₹%.2f added!\n", bonus);
                }
                balance = balance + amount + bonus - 5;
                printf("service charge ₹5 applied.\n");
                printf("updated balance: ₹%.2f\n", balance);
            } else {
                printf("invalid amount!\n");
            }
        }

        else if (choice == 2) {
            printf("enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount > balance) {
                printf("not enough balance!\n");
            } else if (amount <= 0) {
                printf("invalid amount!\n");
            } else {
                balance = balance - amount - 5;
                printf("service charge ₹5 applied.\n");
                printf("updated balance: ₹%.2f\n", balance);
            }
        }

        else if (choice == 3) {
            printf("current balance: ₹%.2f\n", balance);
        }

        else if (choice == 4) {
            printf("thank you for banking with us!\n");
        }

        else {
            printf("invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
