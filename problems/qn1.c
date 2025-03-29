// WAP to perform matrix operations like addition, subtraction and transpose.
// Online C compiler to run C program online
#include <stdio.h>
int inputMatrix(int arr[10][10],int rows, int column);
int displayMatrix(int arr[10][10], int rows, int column);
int matrix_addition(int arr[10][10], int arr1[10][10],int rows,int column);
int matrix_subtraction(int arr[10][10], int arr1[10][10],int rows,int column);
int matrix_transpose(int arr[10][10],int rows, int column);

int main() 
{
    int rows, column, matrix1[10][10], matrix2[10][10];
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&rows,&column);
    
    printf("enter the first matrix:\n");
    inputMatrix(matrix1,rows,column);
    displayMatrix(matrix1,rows,column);
    
    printf("Enter the second matrix:\n");
    inputMatrix(matrix2,rows,column);
    displayMatrix(matrix2,rows,column);
    
    matrix_addition(matrix1, matrix2,rows,column);
    matrix_subtraction(matrix1, matrix2,rows,column);
    printf("Transpose of matrix 1 is: \n");
    matrix_transpose(matrix1,rows,column);
    
    return 0;
}
int inputMatrix(int matrix[10][10], int rows, int column)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    return 0;
}
int displayMatrix(int matrix[10][10], int rows, int column)
{
    printf("Entered matrix is:\n");
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int matrix_addition(int matrix1[10][10], int matrix2[10][10],int rows,int column)
{
    int sum[10][10];
        for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The sum of the matrix is:\n");
    
        for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int matrix_subtraction(int matrix1[10][10], int matrix2[10][10],int rows,int column)
{
    int difference[10][10];

        for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            difference[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    printf("The difference of the matrix is:\n");
    
        for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("%d\t", difference[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int matrix_transpose(int matrix[10][10], int rows,int column)
{
    int transpose[10][10];

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("The transpose of the matrix is:\n");
    
        for(int i=0; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}