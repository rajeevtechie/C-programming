// Qn: Write a function to calculate area of a square, a circe and a rectangle: 

#include<stdio.h>
float square(float a);
float rectangle(float l, float b);
float circle(float r);
int main()
{
    float a,l,b,r;
    printf("The area of square is: %f\n",square(a));
    printf("The area of rectangle is: %f\n",rectangle(l,b));
    printf("The area of circle is: %f\n",circle(r));
    return 0;
}
float square(float a)
{
    printf("enter the length of the square: ");
    scanf("%f",&a);
    return a*a;
}
float rectangle(float l, float b)
{
    printf("Enter the length of the rectangle: ");
    scanf("%f",&l);
    printf("enter the breadth of the rectangle: ");
    scanf("%f",&b);
    return l*b;
}
float circle(float r)
{
    float area;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    area = (22.0/7)*r*r;
    return area;
}