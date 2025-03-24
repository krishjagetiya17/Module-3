/**
36. Write a C program to input electricity unit charges and
calculate totalelectricity bill according to the given condition:
For first 50 units Rs.
0.50/unit For next 100
units Rs. 0.75/unit For next
100 units Rs. 1.20/unit For
unit above 250 Rs.
1.50/unit
An additional surcharge of 20% is added to the bill
 */

#include <stdio.h>

int main()
{
    int u;
    float amt,t_amt,s_charge;

    /* Input units consumed from user */
    printf("\n\n\t Enter Total Units Consumed =  ");
    scanf("%d",&u);


    /* Calculate electricity bill according to given conditions */
    if(u <= 50)
    {
        amt = u * 0.50;
    }
    else if(u <= 150)
    {
        amt = 25 + ((u-50) * 0.75);
    }
    else if(u <= 250)
    {
        amt = 100 + ((u-150) * 1.20);
    }
    else
    {
        amt = 220 + ((u-250) * 1.50);
    }

    //Calculate total electricity bill
    //after adding surcharge
     
    s_charge = amt * 0.20;
    t_amt  = amt + s_charge;

    printf("\n\n\t Electricity Bill = Rs. %.2f",t_amt);

    return 0;
}
