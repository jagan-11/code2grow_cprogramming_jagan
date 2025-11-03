#include <stdio.h>

int main()
{
    int customers, items, i, j;
    float price, total = 0, gst, bill, highest = 0;
    int feedback, sum_feedback = 0, quantity;

    printf("Enter number of customers: ");
    scanf("%d", &customers);

    for (i = 1; i <= customers; i++)
    {
        printf("\nCustomer %d:\n", i);
        printf("Enter number of items: ");
        scanf("%d", &items);

        float subtotal = 0;
        for (j = 1; j <= items; j++)
        {
            printf("Enter price of item %d: ", j);
            scanf("%f", &price);
            printf("Enter quantity of item %d: ", j);
            scanf("%d", &quantity);

            subtotal += price * quantity;  // multiply by quantity
        }

        gst = subtotal * 0.05; // 5% GST
        bill = subtotal + gst;

        printf("Total bill for customer %d = Rs. %.2f\n", i, bill);

        total += bill;
        if (bill > highest)
            highest = bill;

        printf("Enter feedback (1-5): ");
        scanf("%d", &feedback);
        sum_feedback += feedback;
    }

    printf("\n--- Restaurant Summary ---\n");
    printf("Total Revenue = Rs. %.2f\n", total);
    printf("Average Feedback = %.2f\n", (float)sum_feedback / customers);
    printf("Highest Bill = Rs. %.2f\n", highest);

    return 0;
}


