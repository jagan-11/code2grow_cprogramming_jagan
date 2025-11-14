#include <stdio.h>
#include <string.h>

int main() {
    int productID[10], quantity[10], i, j, searchID;
    char productName[10][50];
    float price[10], totalInventoryValue = 0.0, productValue[10];
    int count = 0;
    int choice;

    while (1) {
        printf("
Inventory Management System Menu:");
        printf("1. Input product details");
        printf("2. Display all products");
        printf("3. Calculate total inventory value");
        printf("4. Display product with highest and lowest value");
        printf("5. Search product by ID");
        printf("6. Exit");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter details for up to 10 products:");
            count = 0;
            for (i = 0; i < 10; i++) {
                printf("Product %d ID: ", i + 1);
                scanf("%d", &productID[i]);
                printf("Product %d Name: ", i + 1);
                // To consume leftover newline char before fgets
                getchar();
                fgets(productName[i], 50, stdin);
                // Remove trailing newline from fgets
                productName[i][strcspn(productName[i], "")] = '';
                printf("Product %d Quantity in stock: ", i + 1);
                scanf("%d", &quantity[i]);
                printf("Product %d Price per item: ", i + 1);
                scanf("%f", &price[i]);
                count++;
            }
        }
        else if (choice == 2) {
            printf("
Product List:
              ");
            printf("ID\tName\t\tQuantity\tPrice");
            for (i = 0; i < count; i++) {
                printf("%d\t%s\t\t%d\t\t%.2f", productID[i], productName[i], quantity[i], price[i]);
            }
        }
        else if (choice == 3) {
            totalInventoryValue = 0.0;
            for (i = 0; i < count; i++) {
                productValue[i] = quantity[i] * price[i];
                totalInventoryValue += productValue[i];
            }
            printf("Total inventory value: %.2f", totalInventoryValue);
        }
        else if (choice == 4) {
            if (count == 0) {
                printf("No products available.");
                continue;
            }
            int maxIndex = 0, minIndex = 0;
            for (i = 1; i < count; i++) {
                if ((quantity[i] * price[i]) > (quantity[maxIndex] * price[maxIndex]))
                    maxIndex = i;
                if ((quantity[i] * price[i]) < (quantity[minIndex] * price[minIndex]))
                    minIndex = i;
            }
            printf("Product with highest value: ID %d, Name %s, Value %.2f",
                   productID[maxIndex], productName[maxIndex], quantity[maxIndex] * price[maxIndex]);
            printf("Product with lowest value: ID %d, Name %s, Value %.2f",
                   productID[minIndex], productName[minIndex], quantity[minIndex] * price[minIndex]);
        }
        else if (choice == 5) {
            printf("Enter product ID to search: ");
            scanf("%d", &searchID);
            int found = 0;
            for (i = 0; i < count; i++) {
                if (productID[i] == searchID) {
                    printf("Product found:
ID: %d
Name: %s
Quantity: %d
Price: %.2f",
                           productID[i], productName[i], quantity[i], price[i]);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Product with ID %d not found.", searchID);
        }
        else if (choice == 6) {
            printf("Exiting program.");
            break;
        }
        else {
            printf("Invalid choice. Please try again.");
        }
    }
    return 0;
}
