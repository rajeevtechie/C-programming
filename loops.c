//Loop conditional statements.
#include<stdio.h>
int main()
{
//for loop:
for(int i=1; i<=4; i++)
{
    printf("using loop.\n");
    printf("%d\n",i);
}

//Qn: Print numbers from 1 to 10.
for(int j=1; j<=10; j++)
{
    printf("%d\n",j);
}

// while loop:
int k=1;
while(k<=6)
{
    printf("hii there.\n");
k++;
}

// Qn: print the numbers from 0 to n, if n is given by user.
int n;
printf("enter the terminatinag number: ");
scanf("%d",&n);
int l=0;
while(l<=n)
{
    printf("%d\n",l);
    l++;
}

// do while loop:
int m=1;
do{
    printf("%d\n",m);
    m++;
} while(m<=6);

// Qn: print the sum of first n natural numbers.
int n1,sum=0;
printf("enter the value of n: ");
scanf("%d",&n1);
int o=1;
do{
    sum=sum+o;
    o++;
}
while(o<=n1);
printf("the sum of natural number upto %d is: %d",n1,sum);

//Qn: print the natural numbers upto n in reverse order.
int n2;
printf("enter the value of n: ");
scanf("%d",&n2);
int p=n2;
do{
    printf("%d\n",p);
    p--;
} while(p>=1);

// Qn: print the table of a number input by user. (using loop)
int num;
printf("enter the number: ");
scanf("%d",&num);
printf("The table of %d is:\n",num);
for(int i=1; i<=10; i++)
{
    printf("%d x %d = %d\n",num,i,num*i);
}

// Break statement:
for(int b=1; b<=10; b++)
{
    if(b==7){
        break;
    }
    printf("%d\n",b);
}

// Qn: keep taking numbers as input from user until enters an odd number.
printf("enter any number:\n");
int u;
for(int c=1; ; c++){
    scanf("%d",&u);
    if(u%2!=0){
        printf("you entered odd number.");
        break;
    }
}

// Qn: keep taking numbers as input from user until user enters a number which is multiple of 7.
int s;
do{
    printf("enter the number:\n");
    scanf("%d",&s);
    if(s%7==0){
        break;
    }
}while(1);
printf("thank you");

// continue statement:
// Qn: print all numbers from 1 to 10 except 8
for(int g=1; g<=10; g++){
    if(g==8){
        continue;
    }
    printf("%d\n",g);
}

// Qn: print all the odd numbers from 5 to 50.
for(int h=5; h<=50; h++){
    if(h%2==0){
        continue;
    }
    printf("%d\n",h);
}

// Qn: print the factorial of a number n.
int f,fact=1;
printf("enter the value of n: ");
scanf("%d",&f);
for(int t=1; t<=f; s++)
{
    fact = fact*t;
}
printf("The factorial of the given number is: %d",fact);
return 0;
}