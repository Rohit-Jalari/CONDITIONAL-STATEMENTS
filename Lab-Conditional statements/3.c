#include<stdio.h>
int main()
{
    int num;

    printf("Enter the number :");
    scanf("%d",&num);

    if(num>=0)
    {
        printf("%d is a positive number.\n ",num);
    }
    else
    {
        printf("%d is a negative number.\n",num);
    }
    system("pause");
}
