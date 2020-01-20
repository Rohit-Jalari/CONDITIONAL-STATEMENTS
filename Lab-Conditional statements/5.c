#include<stdio.h>
int main()
{
    int age;

    printf("Enter the age of the candidate :");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("The candidate is eligible for voting.\n");
    }
    else
    {
        printf("The candidate is not eligible for voting.\n");
    }
    system("pause");1
}
