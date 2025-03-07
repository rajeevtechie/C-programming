#include<stdio.h>
void table(int n);
void main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    table(x);
}
void table(int y)
{
    for(int i=0; i<=10; i++)
    {
        printf("%d\n",i*y);
    }
}