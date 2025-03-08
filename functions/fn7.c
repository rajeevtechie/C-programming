// Qn: Write a function to calculate the percentage of a student from marks in Science, maths and hindi
#include<stdio.h>
void percentage();
void main()
{
    percentage();
}
void percentage()
{
    float s,m,h,total,percentage;
    printf("Enter the marks in Science,maths and hindi out of hundred: ");
    scanf("%f %f %f",&s,&m,&h);
    total = s+m+h;
    percentage = (total/300)*100;
    printf("The percentage of the student is: %f",percentage);

}