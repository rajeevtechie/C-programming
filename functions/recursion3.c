// Qn: find the factorial of a number using recursion.
#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The factorial of %d is: %d",n,fact(n));
    return 0;
}
int fact(int n)
{
    if(n==0){
        return 1;
    }
   int factorial = fact(n-1)*n;
    return factorial;
}