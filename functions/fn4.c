#include<stdio.h>
void price(float value);
void main()
{
    float value;
    printf("enter the value: ");
    scanf("%f",&value);
    price(value);
    printf("\nvalue is: %f",value);  //it will print the entered value not the calculated value.
}
void price(float value)
{
    value = value + (value*0.18);
    printf("the price is: %f",value);
}