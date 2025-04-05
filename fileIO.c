#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("file.txt","r");
    
    //reading characters from the file: 
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("character: %c\n",ch); 
    fscanf(fptr,"%c",&ch);
    printf("character: %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character: %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character: %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character: %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("character: %c\n",ch);
    printf("\n");
    
    printf("character: %c\n",fgetc(fptr));  //to read from the file.
    fclose(fptr);

    // //writing into the file: 

    fptr = fopen("file.txt","a");
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'u');
    fprintf(fptr,"%c",'p');
    fprintf(fptr,"%c",'t');
    fprintf(fptr,"%c",'a');

    printf("\n");
    
    fputc('Q',fptr);  //to write in the file.
    fclose(fptr);


    //Qn: Make a program to input student information from a user and enter it to a file.
    FILE *fptr3;
    fptr3 = fopen("student.txt","w");
    int age;
    float marks;
    char name[100];
    printf("enter the student name: ");
    scanf("%s",&name);
    printf("enter the student age: ");
    scanf("%d",&age);
    printf("enter the student marks: ");
    scanf("%f",&marks);
    
    fprintf(fptr3,"name=%s\n",name);
    fprintf(fptr3,"age=%d\n",age);
    fprintf(fptr3,"marks=%f\n",marks);
    fclose(fptr3);

    //Qn: write a program to write all the odd number from 1 to n in a file.
    FILE *fptr4;
    fptr4 = fopen("odd_no.txt","w");
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i+=2)
    {
        fprintf(fptr4,"%d\n",i);
    }
}