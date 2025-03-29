#include<stdio.h>
void sqr(int n);
void _sqr(int *n);
int swap(int a, int b);
int _swap(int *a, int *b);
int calculations(int a, int b, int *sum, int *prdct, int *average);
int main()
{
    int marks=98;
    int *ptr;
    ptr=&marks;  // '*' gives value at address and "&" gives the address.
    int _marks=*ptr;  
    printf("the value of marks is: %d\n",*ptr); //gives the value of marks using address.
    printf("the address of the variable marks is: %p\n", &marks); //it gives the address of marks variable in hexadecimal format.
    printf("the address of the variable marks is: %u\n",&marks); //it prints the address in decimal format.
    printf("the address of the variable using pointer is: %u\n",ptr);
    printf("using both combination to print the value: %d",*(&marks));

    //Practise: 
    int *ptr1;
    int x;
    ptr1=&x;
    *ptr1=0;

    printf("x=%d\n",x);
    printf("*ptr1=%d",*ptr1);

    *ptr1+=10;
    printf("x=%d\n",x);
    printf("*ptr1=%d\n",*ptr1);

    (*ptr1)++;
    printf("x=%d\n",x);
    printf("*ptr1=%d\n",*ptr1);

    //Pointer to pointer: 
    float age=34;
    float *ptr2=&age; 
    float **pptr=&ptr2; //it stores the address of ptr2.

    printf("address of age is: %u\n",&age);
    printf("address of age is: %u\n",ptr2);
    printf("address of pointer ptr2 is:%u\n",pptr);

    // Qn: print the value of "i" from its pointer to pointer.
    int i=35;
    int *ptr3=&i;
    int **pptr3=&ptr3;
    printf("the value of i is: %d\n",**pptr3);

    //Pointers in Function call
    int n=9;
    sqr(n);
    printf("the number is: %d\n",n); // prints n=4 here.

    _sqr(&n);
    printf("the number is: %d\n",n); //printf n=16, bcz we have changed the value of n in its address in that function.

    //Qn: swap two numbers using call by value and call by reference.
    int a=2,b=3;
    // swap(a,b);
    // _swap(&a,&b);

    //Qn: write a function to calculate the sum, product, and average of 2 numbers. Print these all in main function.
    int num1, num2,sum, prdct, average;
    num1=10;
    num2=30;
    calculations(num1,num2,&sum,&prdct,&average);
    printf("sum=%d, product = %d and average = %d", sum, prdct, average);

}
//call by value: 
void sqr(int n)
{
    n=n*n;
    printf("the square of number is: %d\n",n);
}
// //call by reference: 
void _sqr(int *n)
{
    *n=(*n)*(*n);
    printf("the sqare of the number is: %d\n",*n);
}
//call by value: 
int swap(int a, int b)
{
    int c;
    printf("before swapping, a=%d and b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("before swapping, a=%d and b=%d",a,b);
    return 0;
}
//call by reference: 
int _swap(int *a, int *b)
{
    int c;
    printf("before swapping, a=%d and b=%d\n",*a,*b);
    c=*a;
    *a=*b;
    *b=c;
    printf("before swapping, a=%d and b=%d",*a,*b);
    return 0;
}
int calculations(int a, int b, int *sum, int *prdct, int *average)
{
    *sum=a+b;
    *prdct = a*b;
    *average=(a+b)/2;
}