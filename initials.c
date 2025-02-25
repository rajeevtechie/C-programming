#include<stdio.h>
int main()
{
    
    int a,b,sum;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    sum = a+b;
    printf("The sum of the %d and %d is: %d",a,b,sum);


    /*
    Qn.1: WAP to calculate the area of a square
    */
    int s1;
    printf("Enter the value of side of square: ");
    scanf("%d",&s1);
    printf("Area of the square is: %d",s1*s1);

    int c = 5.2 % 4;
    printf("%d",c); //it will print error because % does not work with float values.
    
    //type conversion:
   printf("%f",5+5.5); //it will print float value because the combination of int and float gives the float value.
    printf("%f",4.0/5);
    int d = (int) 1.9999999;
    printf("%d",d);  //it will print only 1 since int data type removes the decimal values.
    int e=5+6*5;
    printf("%d\n",e); //result will be 35 not 55 because "* / %" are performed first followed by "+ -"
    int f = 5*4/4*3;
    printf("%d\n",f); //in case of same precedence, operations are perfomed from left to right.
    int g = 6+2/2*3;
    printf("%d\n",g); //the output will be 9: 2/2=1*3=3+6=9

//logical operators:
printf("%d",5==4 || 3==3); //returns 1(true) since "or" operators is used here.

//QN: WAP to check if a number is divisible by 2 or not.
int h;
printf("Enter the number: ");
scanf("%d",&h);
printf("%d",h%2==0); //returns 1 for true values and 0 for false values.

//conditional statements: 
//if-else case:
int age;
printf("Enter the age of the person : ");
scanf("%d",&age);
if(age>28)
{
    printf("the person is an adult.");
}
else{
    printf("the person is not an adult.");
}

//ternary operator:
age<=18 ? printf("the person is not adult.") : printf("the person is adult.");

//switch case: 
int day;
printf("Enter the day number(1-7): ");
scanf("%d",&day);
switch(day)
{
    case 1: printf("monday.");
    break;
    case 2: printf("tuesday");
    break;
    case 3: printf("wednesday.");
    break;
    case 4: printf("thurday.");
    break;
    case 5: printf("friday.");
    break;
    case 6: printf("saturday.");
    break;
    case 7: printf("sunday.");
    break;
    default: printf("enter valid day.");
}

//QN: WAP to check if a student is passes or failed.
float marks;
printf("Enter the marks(0-100):");
scanf("%f",&marks);
if(marks>35)
printf("the student has passed.");
else
printf("the student is fail.");

// OR
marks>=35 ? printf("pass.") : printf("fail.");

//QN: WAP to give grades to a student.
float mrks;
printf("enter the marks obtained: ");
scanf("%f",&mrks);
if(mrks<=100 && mrks>=90)
printf("Grade: A+");
else if(mrks<90 && mrks>=70)
printf("Grade: A");
else if(mrks>=30 && mrks<70)
printf("Grade: B");
else if(mrks<30)
printf("Grade: C");

// QN: WAP to find if a charactere entered by user is upper case or not.
char ch;
printf("enter the character: ");
scanf("%c",&ch);
if(ch >= 'a' && ch <= 'z') //or we can write ch>=97 in place of ch >= 'a'
printf("the character is lower case.");
else if((ch >= 'A' && ch <= 'Z'))
printf("the character is upper case.");
else
printf("not english");
return 0;
}
