#include <stdio.h>
#include <conio.h>
#include <string.h>

int p,n;
struct stu
{
    char name[50];
    int roll;
    float marks;
}data[50];

void show()//print the struct. things
{
    printf("\nName: %s\n",data[p].name);
    printf("Roll No. :- %d\n",data[p].roll);
    printf("Marks : %0.2f\n",data[p].marks);
}

void searcher()//for searching through roll no.
{
    int s;
    puts("ENTER THE ROLL NO. OF THE STUUDENT YOU WANT TO SEARCH");
    scanf("%d",&s);
    for(int a=0;a<n;a++)
    {
        if(s==data[a].roll)
        {
            p=a;
            show();//print details
            exit(0);//exit if the roll no. found
        }

    }
    puts("\nInvalid roll no. enter correct roll no. .........");
    searcher();//f roll no not found return to own function

}

void updater()//to update the student information
{
    int s,f;
    puts("\nENTER THE ROLL NO. OF THE STUDENT YOU WANT TO UPDATE:");
    scanf("%d",&s);

    for(int a=0;a<n;a++)
    {
        if(s==data[a].roll)
        {
            p=a;//obtain the index no from roll no.
            printf("\nName: %s\n",data[p].name);
            printf("Roll No. :- %d\n",data[p].roll);
            printf("Marks : %0.2f\n",data[p].marks);
            puts("\nWhich information of the student you want to update (give ans. as per no.):");
            puts("1. Name");
            puts("2. Roll no.");
            puts("3. Marks");
            scanf("%d",&f);

            switch(f)//do as per ans.
            {
                case 1: puts("Enter the new name of student:");
                        scanf("%s",&data[p].name);
                        break;
                case 2: puts("Enter the new roll no. of student:");
                        scanf("%s",&data[p].roll);
                        break;
                case 3: puts("Enter the new marks of student:");
                        scanf("%s",&data[p].marks);
                        break;
                default:    puts("Invalid choice......");
                            updater();
            }
            show();
            exit(0);
        }
    }
    puts("\nInvalid roll no. enter correct roll no. .........");
        updater();
}

void deleter()
{
    int s;
    for(int j=0;j<n;j++)//print one time all student information
    {
        printf("Student %d name : %s\n",j+1,data[j].name);
        printf("Student %d roll no : %d\n",j+1,data[j].roll);
        printf("Student %d marks : %0.2f\n",j+1,data[j].marks);
        printf("\n\n");
    }

    puts("ENTER THE ROLL NO. OF THE STUDENT YOU WANT TO DELETE");
    scanf("%d",&s);

    for(int a=0;a<n;a++)//shifting the elements of the array to delete one students data
    {
        if(s==data[a].roll)
        {
            p=a;
            for(int j=p;j<n;j++)
            {
                data[j]=data[j+1];
            }
            for(int j=0;j<n-1;j++)//print final list
            {
                printf("Student %d name : %s\n",j+1,data[j].name);
                printf("Student %d roll no : %d\n",j+1,data[j].roll);
                printf("Student %d marks : %0.2f\n",j+1,data[j].marks);
                printf("\n\n");
            }
            exit(0);
        }
    }
    puts("\nInvalid roll no. enter correct roll no. .........");
    deleter();
}
void condition()
{
    int sear;
    scanf("%d",&sear);

    if(sear==1)
    {
        searcher();
    }
    else if(sear==2)
    {
        updater();
    }
    else if(sear==3)
    {
        deleter();
    }
    else if(sear==4)
    {
        exit(0);
    }
    else
    {

        puts("\nInvalid choice.......");
        puts("Enter correct choice:");
        condition();
    }
}

int main()
{
    int check;

    puts("Enter how many student data you want to enter: ");
    scanf("%d",&n);

    printf("\n\n");

    //inputs from user
    for(int i=0;i<n;i++)
    {
        printf("Enter student %d name:\n",i+1);
        scanf("%s", &data[i].name);
        printf("Enter student %d roll no.:\n",i+1);
        scanf("%d", &data[i].roll);
        printf("Enter student %d marks:\n",i+1);
        scanf("%f", &data[i].marks);
        printf("\n\n");
    }

    //printing all information
    for(int j=0;j<n;j++)
    {
        printf("Student %d name : %s\n",j+1,data[j].name);
        printf("Student %d roll no : %d\n",j+1,data[j].roll);
        printf("Student %d marks : %0.2f\n",j+1,data[j].marks);
        printf("\n\n");
    }

    puts("NOW WHAT YOU WANT TO DO [GIVE ANS. AS PER NO.]:");
    printf("1.\tSEARCH FOR STUDENT.\n");
    printf("2.\tUPDATE THE STUDENT INFORMATION.\n");
    printf("3.\tDELETE THE STUDENT DATA.\n");
    printf("4.\tEXIT.\n");
    condition();

    return 0;
}
