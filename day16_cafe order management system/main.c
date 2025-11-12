#include <stdio.h>

int main() {
int prices[5] = {50, 30, 80, 120, 60};
int sold[5] = {0};
char *items[5] = {"Coffee", "Tea", "Sandwich", "Burger", "Pastry"};

int customers, i, j, item_no, quantity;
float total_revenue = 0;

printf("========= Café Order Management System =========\n");

printf("Enter total number of customers (max 10): ");
scanf("%d", &customers);

if (customers > 10 || customers <= 0) {
printf("Invalid number of customers. Please enter between 1–10.\n");
return 0;
}

for (i = 1; i <= customers; i++) {
int total_bill = 0;
int num_items;

printf("\n--- Customer %d ---\n", i);
printf("Enter number of items: ");
scanf("%d", &num_items);

printf("Enter item number and quantity:\n");
for (j = 1; j <= num_items; j++) {
scanf("%d %d", &item_no, &quantity);

if (item_no < 1 || item_no > 5 || quantity <= 0) {
printf("Invalid input. Skipping this entry.\n");
continue;
}

total_bill += prices[item_no - 1] * quantity;
sold[item_no - 1] += quantity;
}

printf("Total Bill for Customer %d: ₹%d\n", i, total_bill);
total_revenue += total_bill;
}

int total_items_sold = 0;
for (i = 0; i < 5; i++)
total_items_sold += sold[i];


int max_index = 0, min_index = 0;
for (i = 1; i < 5; i++) {
if (sold[i] > sold[max_index])
max_index = i;
if (sold[i] < sold[min_index])
min_index = i;
}

printf("\n========= Café Summary =========\n");
printf("Total Revenue: ₹%.2f\n", total_revenue);
printf("Total Items Sold: %d\n", total_items_sold);
printf("Most Ordered Item: %s\n", items[max_index]);
printf("Least Ordered Item: %s\n", items[min_index]);
printf("================================\n");

return 0;
}
