// Qn: find the sum of first n natural numbers using recursion.
#include<stdio.h>
int sum(int n);
int main()
{  
    int n;
    printf("Enter the natural number: ");
    scanf("%d",&n);
    int result = sum(n);
    printf("The sum of natural number upto %d is: %d",n,result);
    return 0;
}
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return sum(n-1)+n;
}