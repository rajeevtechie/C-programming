//functions and recursion:
#include<stdio.h>
void printname(); // declaration/prototype
void greeting();
int main()
{
    printname(); //function call
    greeting();
    
}
void printname() //function definition.
{
    printf("Rajeev Gupta\n");
}
// Qn: write a function that prints Namaste if user is indian and Bonjour if the user is french.
void greeting(){
    int ny;
    printf("What's your nationality: 1 for Indian or 2 for French: ");
    scanf("%d",&ny);
    if(ny == 1 )
    printf("Namaste");
    else
    printf("Bonjour");
}