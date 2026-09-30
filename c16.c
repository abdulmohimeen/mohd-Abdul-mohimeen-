//write a C program to check whether the student is pass or fail based upon the condition
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    if(marks>=40)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    return 0;
}