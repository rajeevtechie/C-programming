#include<stdio.h>
void main()
{
    int p=1000,t=6,r=5,si,i,amount;
    for(i=1; i<=t; i++)
    {
        si = (p*i*r)/100;
        amount = p+si;
        printf("The amount upto %d year is: %d",i,amount);
        printf("\n");
    }
}