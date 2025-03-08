// Qn: Write a function to print nth term of the fibonacci sequence.
#include<stdio.h>
void fibonacci();
void main()
{
    fibonacci();
}
void fibonacci()
{
    int n,a=0,b=1,c;
    printf("Enter the positon of the term in the series: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d\t",c);
}  