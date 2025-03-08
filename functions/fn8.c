// Qn: Write a function to print n terms of the fibonacci sequence.
#include<stdio.h>
void fibonacci();
void main()
{
    fibonacci();
}
void fibonacci()
{
    int n,a=0,b=1,c;
    printf("Enter the number of terms in the series: ");
    scanf("%d",&n);
    printf("%d\t%d\t",0,1);
    for(int i=1; i<=n-2; i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
}