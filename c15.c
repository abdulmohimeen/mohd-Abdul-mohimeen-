//write a c program to check the grades of a student marks based upon the condition-use else if
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    if(marks>=90)
    {
        printf("Grade A");
    }
    else if(marks>=75)
    {
        printf("Grade B");
    }
    else if(marks>=60)
    {
        printf("Grade C");
    }
    else if(marks>=40)
    {
        printf("Grade D");
    }
    else
    {
        printf("fail");
    }
    return 0;
}