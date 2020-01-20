#include<stdio.h>
int main()
{
    float angle1,angle2,angle3;


    printf("Enter the values of interior angles of the triangle :\n");
    scanf("%f %f %f",&angle1,&angle2,&angle3);

    int sum=angle1+angle2+angle3;
    if(sum==180 && angle1!=0 && angle2!=0 && angle3!=0)
    {
        printf("It is a valid triangle.");
    }
    else
    {
        printf("Its is not a valid triangle.");
    }

}
