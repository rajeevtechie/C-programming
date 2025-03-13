#include<stdio.h>
void numbers(int arr[],int n);
int main()
{
    float age[5]={45,65,23,15,56};
    // float marks[4];
    // printf("marks of maths: ");
    // scanf("%f",&marks[0]);

    // printf("marks of physics: ");
    // scanf("%f",&marks[1]);

    // printf("marks of chemistry: ");
    // scanf("%f",&marks[2]);

    // printf("maths=%f \nphysics=%f \nchemistry=%f\n",marks[0],marks[1],marks[2]);

    //Qn: WAP to enter the price of 3 items and print their final cost with gst.
    // float price[3];
    // printf("Enter the price of first item: ");
    // scanf("%f",&price[0]);
    // printf("Enter the price of second item: ");
    // scanf("%f",&price[1]);
    // printf("Enter the price of third item: ");
    // scanf("%f",&price[2]);
    // float sum=price[0]+price[1]+price[2];
    // float final_cost = sum+sum*(18/100);
    // printf("the final cost with gst is: %f\n",final_cost);

    // int arr[]={1,2,3,4,5,6};
    // numbers(arr,6); //calling the function.

    //multidimensional array: 
    int m[2][3];  // _ _ _
                  // _ _ _ 
    m[0][0]=87;
    m[0][1]=96;
    m[0][2]=98;

    m[1][0]=87;
    m[1][1]=96;
    m[1][2]=98;

    m[2][0]=87;
    m[2][1]=96;
    m[2][2]=98;

    printf("%d\t%d\t%d\n",m[0][0],m[0][1],m[0][2]);
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t",m[i][j]); //to print all the elements of the array.
        }
    }


    return 0;
}
void numbers(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}