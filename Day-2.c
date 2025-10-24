
#include <stdio.h>
int main()
{
    float meal_cost,tax,tip,total_bill;
    float person_1_share,person_2_share,person_3_share;
    printf("entre the meal cost price\n");
    scanf("%f",&meal_cost);
    tax = meal_cost*0.05;
    tip = meal_cost*0.10;
    total_bill = meal_cost + tax + tip;
    person_1_share = total_bill/2;
    person_2_share = total_bill/2;
     //person three forgot his wallet so he is not paying his share
     person_3_share = 0;
     printf("the total bill cost is %.2f\n ",total_bill);
     printf("the bill paid by person_1 is %.1f\n",person_1_share);
     printf("the bill paid by person_2 is %.1f\n",person_2_share);
     printf("the bill paid by person_3 is %.2f\n",person_3_share);
     printf("tax paid is %.2f\n",tax);
     printf("tip given is %.2f\n",tip);


}
