#include<stdio.h>
int main()
{
    int age,income;
    printf("Enter your age :");
    scanf("%d",&age);
    printf("Enter your income : ");
    scanf("%d",&income);
    if(18<=age && age<=60)
    {
        if(18<=age && age<=25)
        {
            if(income>=5000)
                printf("Eligible");
            else
                printf("Not eligible");
        }
        if(25<age && age<=40)
        {
            if(income>=10000)
                printf("Eligible");
            else
                printf("Not eligible");
        }
        if(age>40)
        {
            if(income>=15000)
                printf("Eligible");
            else
                printf("Not eligible");
        }
    }
    else
        printf("Not eligible");
}