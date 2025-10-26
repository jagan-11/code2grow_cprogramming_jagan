#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,total;
    float percentage,attendance_percentage;

    printf("Enter Marks of Subject 1");
    scanf("%d",&sub1);
    printf("Enter Marks of Subject 2");
    scanf("%d",&sub2);
    printf("Enter Marks of Subject 3");
    scanf("%d",&sub3);
    printf("Enter Marks of Subject 4");
    scanf("%d",&sub4);
    printf("Enter Marks of Subject 5");
    scanf("%d",&sub5);

    printf("Enter Student's Attendance Percentage");
    scanf("%f",&attendance_percentage);

    if ((sub1 > 100) || (sub1 < 0) || (sub2 > 100) || (sub2 < 0) || (sub3 > 100) || (sub3 < 0) || (sub4 > 100) || (sub4 < 0) || (sub5 > 100) || (sub5 < 0))
    {
    printf("\nInvalid Input !,Percentage and Each subject marks should be between 0 and 100\n");
    }

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = ( total / 5 );

    if (attendance_percentage < 75)
    {
    printf("You got 'F' Grade regardless of your percenatge\n");
    }
    else if (percentage >= 45 && percentage < 50 && attendance_percentage >= 90)
    {
    percentage += 5;
    }
    printf("Percentage : %f \n",percentage);
    printf("Attendance Percentage : %f \n",attendance_percentage);
    if (percentage >= 90 && percentage <= 100 && attendance_percentage >= 75)
    {
    printf("You secured 'A+' Grade \n");
    printf("Remarks : Excellent \n");
    }
    else if (percentage >= 80 && percentage <= 89 && attendance_percentage >= 75)
    {
    printf("You secured 'A' Grade \n");
    printf("Remarks : Very Good \n");
    }
    else if (percentage >= 70 && percentage <= 79 && attendance_percentage >= 75)
    {
    printf("You secured 'B' Grade \n");
    printf("Remarks : Good \n");
    }
    else if (percentage >= 60 && percentage <= 69 && attendance_percentage >= 75)
    {
    printf("You secured 'C' Grade \n");
    printf("Remarks : Average \n");
    }
    else if (percentage >= 50 && percentage <= 59 && attendance_percentage >= 75)
    {
    printf("You secured 'D' Grade \n");
    printf("Remarks : Pass \n");
    }
    else
    {
    printf("You secured 'F' Grade \n");
    printf("Remarks : Fail \n");
    }
    return 0;
}
