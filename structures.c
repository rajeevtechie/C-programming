#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int prn;
    float marks;
    
};

//Typedef keyword: 
typedef struct engineering_students{
    char name[50];
    int age;
}stds;

struct address{
    int house_no, block;
    char city[50],state[50];
};


struct vector{
    int x;
    int y;
};

struct complex{
    int real, img;
};

int info(struct student s);
int sum_vectors(struct vector v1, struct vector v2);
int main()
{
    struct student s1;
    strcpy(s1.name,"Rajeev kumar Gupta");
    s1.prn=2503;
    s1.marks=98.6;
    printf("Name=%s\n",s1.name);
    printf("PRN=%d\n",s1.prn);
    printf("Marks=%f\n",s1.marks);

    struct student s2;
    strcpy(s2.name,"Ram");
    s2.prn=342;
    s2.marks=96.5;
    printf("Name=%s\n",s2.name);
    printf("PRN=%d\n",s2.prn);
    printf("Marks=%f\n",s2.marks);


    //Array of structures: 
    struct student CSE[100];
    strcpy(CSE[0].name,"Akhil");
    CSE[0].prn=453;
    CSE[0].marks=99.5;
    printf("Name=%s\n",CSE[0].name);
    printf("PRN:%d\n",CSE[0].prn);
    printf("Marks: %f\n",CSE[0].marks);

    strcpy(CSE[1].name,"Aadish");
    CSE[1].prn=487;
    CSE[1].marks=98.5;
    printf("Name=%s\n",CSE[1].name);
    printf("PRN:%d\n",CSE[1].prn);
    printf("Marks: %f\n",CSE[1].marks);


    //Initialising the structure: 
    struct student s4={"anayra",543, 95.4};
    struct student s5={"rehan",654,93.5};
    printf("Name=%s\n",s4.name);
    printf("PRN=%d\n",s4.prn);
    printf("Marks=%f\n",s4.marks);

    printf("Name=%s\n",s5.name);
    printf("PRN=%d\n",s5.prn);
    printf("Marks=%f\n",s5.marks);


    //Pointer to structure: 
    struct student s5;
    struct student *ptr;
    ptr=&s5;
    strcpy(s5.name,"Nikhil");
    s5.prn=734;
    s5.marks=92.5;
    printf("prn=%d\n",(*ptr).prn); //accessing the prn using pointer.
    printf("marks=%f\n",ptr->marks); //arrow operator.


    //Passing structure to function.
    info(s5);


    //Typedef keyword: 
    stds s7;
    strcpy(s7.name,"Satyam");
    s7.age = 23;
    printf("Name of engineering student: %s\n",s7.name);
    printf("Age of engineering student: %d\n",s7.age);

    // Qn: Enter address(house no, block, city, state).
    struct address person[5];
    int i;
    printf("Enter the details of 5 persons:\n");
    for(i=0; i<5; i++)
    {
        printf("For person %d\n",i+1);
        printf("House no: ");
        scanf("%d",&person[i].house_no);
        printf("Block: ");
        scanf("%d",&person[i].block);
        printf("City: ");
        scanf("%s",&person[i].city);
        getchar(); //consumes the newline character left by scanf();
        printf("State: ");
        fgets(person[i].state, 50, stdin);
        printf("\n");
    }

    printf("Entered detailes are: \n");
    for(i=0; i<5; i++)
    {
        printf("For person %d\n: ",i+1);
        printf("House No. : %d\n",person[i].house_no);
        printf("Block: %d\n",person[i].block);
        printf("City: %s\n",person[i].city);
        printf("State: %s\n",person[i].state);
    }


    //Qn: create a structure to store vectors. Then make a function to return sum of two vectors.
    struct vector v1;
    v1.x=10;
    v1.y=12;

    struct vector v2;
    v2.x=14;
    v2.y=16;

    sum_vectors(v1,v2);


    //Qn: create a structure to store complex number(use arrow operator).
    struct complex num8={4,8};
    struct complex *ptr8=&num8;

    printf("real part= %d\nimg part= %d",ptr8->real,ptr8->img);

    return 0;
}

int info(struct student s)
{
    printf(" name=%s\n prn=%d\n marks=%f\n",s.name, s.prn, s.marks);

    return 0;
}
int sum_vectors(struct vector v1,struct vector v2)
{
    struct vector sum;
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("sum of x-component=%d \nsum of y-component=%d",sum.x,sum.y);
    return 0;
}
