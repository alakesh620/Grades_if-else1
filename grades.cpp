
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
     else if(marks>=85 && 100)
    {
        printf("Grade A");
    }
    else if(marks>=70 && 84)
    {
        printf("Grade B");
    }
    else if(marks>=55 && 69)
    {
        printf("Grade C");
    }
    else if(marks>=40 && 54)
    {
        printf("Grade D");
    }
    else if(marks<40)
    {
        printf("Grade F");
    }
    else
    {
        printf("Fail");
    }
}
