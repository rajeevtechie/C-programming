#include<stdio.h>
#include<string.h>
void slice();
void vowels();
int main()
{
    char name[] = {'R', 'A', 'J', 'E', 'E', 'V',' ','G','U','P','T','A','\0'}; // single quote for character and null character to end string.
    printf("%s\n", name); 
    char name1[]="Rajeev Gupta"; //double quote for string and do not need to use null character.
    printf("%s",name1);

    //Qn: create a string "firstName" and "lastName" to store details of user and print all the characters using a loop.
    char firstName[]="Rajeev";
    char lastName[] = "Gupta";
    for(int i=0; firstName[i]!='\0'; i++)
    {
        printf("%c\t",firstName[i]);
    }

    printf("\n");

    for(int i=0; lastName[i]!='\0'; i++)
    {
        printf("%c\t",lastName[i]);
    }

    //taking a single string as a input: 
    char str[20];
    scanf("%s",str);
    printf("entered string is: %s",str);

    //taking multiple strings as input: 
    char str1[50]; //it is capable of storing 50 characters.
    fgets(str1,40,stdin); //i can store only 39 characters here..since one is there for null character.
    puts(str1);

    //Qn: WAP that input user's name and prints it length with and without using built in functions.
    char name1[100];
    int count=0;
    printf("Enter your name: ");
    fgets(name1,100,stdin);
    for(int i=0; name1[i]!='\0'; i++)
    {
        count++;
    }
    printf("The length of the entered name is: %d\n",count-1); //we put count-1 because when press enter, fgets generate is newline character: string\n\0
   
    // //using inbuilt function: 
    printf("the length of the string is: %d",strlen(name1)-1); //we subtracted 1 because again fgets generates new line when we press enter.
    
    //Standard library functions: 
    char str2[]="rajeev";
    printf("length: %d",strlen(str2));

    char str3[]="new_string";
    char str4[]="old_string";
    printf("Now str3 becomes: %s",strcpy(str3,str4));

    printf("concatenated strings is: %s",strcat(str3,str4)); //only if first string has enough capacity(if size is bigger enough).
    
    printf("comparing two strings: %d",strcmp(str3,str4)); //compares ASCII value and gives positive,negative or zero result on the basis of it.
    // strcmpt does lexicographical comparison which is like which word comes first in the dictionary..which is determined by positive,negative or zero values given by it.
    
    //QN: WAP to take a string input from the user using %c.
    char str5[50];
    char ch;
    int i=0;
    while(ch!='\n')
    {
        scanf("%c",&ch);
        str5[i]=ch;
        i++;
    }
    str5[i]='\0'; //to end the string.
    puts(str5);

    // Qn: WAP to find the salted form of a password entered by user if the salt is "123" & added at the end.
    char password[50];
    printf("enter the password: ");
    scanf("%s",&password);
    char salt[] = "123";
    strcat(password,salt); //password = password + salt
    printf("final password is: %s",password);

    slice();
    vowels();
    return 0;
}
    
    // Qn: write a function named slice, which takes a string & returns a sliced string from index n to m.
    void slice()
    {
    int i,m,n,j=0;
    char str6[100],newstr[50];
    printf("enter the string: ");
    scanf("%s",str6);
    printf("enter the value of n and m: ");
    scanf("%d %d",&n,&m);
    for(i=n; i<=m; i++, j++)
    {
        newstr[j]=str6[i];
    }
    newstr[j]='\0';
    puts(newstr);
}
// Qn;write a function to count the occurrence of vowels in a string.
void vowels()
{
    char v[100];
    int count1=0; 
    printf("enter the string: ");
    scanf("%s",v);
    for(int k=0; v[k]!='\0'; k++)
    {
        if(v[k]=='a' || v[k]=='e' || v[k]=='i' || v[k]=='o' || v[k]=='u' )
        {
            count1++;
        }
    }
    printf("the no. of vowels are: %d",count1);

}