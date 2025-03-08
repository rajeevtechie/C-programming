//Recursion:
#include<stdio.h>
int recursion(int n);
void main()
{
    recursion(10);
}
int recursion(int n)
{
    if(n==0)
    {
        return 0;
    }
    printf("recursion\n");
    recursion(n-1);
    return 0;
}