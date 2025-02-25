#include<stdio.h>
#include<math.h>
int main()
{

    int a,b,c;
    a=b=c=5; //it is valid but "int a=b=c=5" is not valid.
    printf("%d %d %d \n",a,b,c);
    int d,e,f;
    d = e+f; //it is valid but "d+e=f" is not valid because we can have only one varaible at the LHS side.
    int power = pow(4,5); //it will print the value of 4  to the power of 5. 
    printf("%d \n",power);
    printf("")
    return 0;
}