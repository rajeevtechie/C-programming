#include<stdio.h>
int sum(int a, int b);
void main()
{
    int a, b,n;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
    
   int s=sum(a,b);
    printf("the sum is: %d",s);
  
}
int sum(int x, int y){
    return x+y;
}
