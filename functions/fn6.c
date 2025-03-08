// Qn: write a function to convert celcius to fahrenheit.
#include<stdio.h>
void temp();
int main()
{
    temp();
}
void temp()
{
    float celcius;
    printf("Enter the temperature in celcius:");
    scanf("%f",&celcius);
    float fahrenheit = (9.0/5)*celcius + 32;
    printf("The temperature in fahrenheit is: %f",fahrenheit);
}