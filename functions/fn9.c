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
    for(int i=1; i<=n-2; i++) //or I could have written i=3, i<=n,i++ for better practise.
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(n==1){
        printf("%d",0);
    }
    else if(n==2){
        printf("%d",1);
    }
    else
    printf("%d\t",c);
}  