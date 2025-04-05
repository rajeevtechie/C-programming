//dynamic memory allocation: 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //Malloc function:
    float *ptr;
    ptr = (float *) malloc(7* sizeof(int));  //it gives the total bytes of memory that is allocated.(eg. 7*4=28 bytes)
    ptr[0]=4;
    ptr[1]=45;
    ptr[2]=64;
    ptr[3]=63;
    ptr[4]=66;
    ptr[5]=98;
    ptr[6]=89;

    for(int i=0; i<7; i++)
    {
        printf("%f\n",ptr[i]);
    }

    //calloc function: 
    float *ptr1;
    ptr1 = (float *) calloc(7, sizeof(int)); //it'll provide 7 block to store 7 integers value.
    
    for(int i=0; i<7; i++)
    {
        printf("%f\n",ptr1[i]); //return 0, as it's default value is 0
    }

    //free(ptr2); //it makes the allocated memory free.

    //realloc function: 
    //Qn: Allocate memory for 5 numbers. Then dynamically increase it to 8 numbers.
    int *ptr2;
    ptr2 = (int *) calloc(5, sizeof(int));
    printf("enter the five numbers:");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&ptr2[i]);
    }

    ptr2 = (int *) realloc(ptr2, 8);
    printf("now enter 8 numbers: ");
    for(int i=0; i<8; i++)
    {
        scanf("%d",&ptr2[i]);
    }

    printf("entered numbers are: ");
    for(int i=0; i<8; i++)
    {
        printf("%d\n",ptr2[i]);
    }

    //Qn: Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even number.
    int *ptr3;
    ptr3 = (int *) calloc(5,sizeof(int));
    printf("first five odd numbers are: ");
    for(int i=1; i<=9; i+=2)
    {
        printf("%d\n",i);
    }

    ptr3 = (int *) realloc(ptr3,6);
    printf("first 6 even numbers are: ");
    for(int i=0; i<=10; i+=2)
    {
        printf("%d\n",i);
    }
}