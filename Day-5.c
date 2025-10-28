#include <stdio.h>
int main()
{
int age,health;
char gender;
float premium;
printf("entre age:\n");
scanf("%d",&age);
printf("entre gender:\n",&gender);
scanf(" %c", &gender);
printf("enter your health condition\n");
scanf("%d",&health);
    if(age < 25)
    {
       if(health == 1)
       premium = 5000;
       else
       premium = 0;
    }
    else if(age >= 25 && age < 40)
    {
        if(health == 1)
        premium = 7000;
        else
        premium = 9500;
    }
    else if(age >= 41 && age< 60)
    {
        if(health == 1)
        premium = 10000;
        else
        premium = 13000;
    }
    else if(age > 60)
    {
        if(health == 1)
        premium = 15000;
        else
        {
            printf("health: not eligible\n");
        }
    }
    if(gender == 'F')
    {
        premium = premium - premium*0.10;
    }
printf("customer details:\n");
printf("age:%d\n",age);
printf("gender: %c\n",gender);
printf("health:healthy\n");
printf("final premium:%.2f",premium);
return 0;
}
