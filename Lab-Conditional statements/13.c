#include<stdio.h>
int main()
{
    float side1,side2,side3;

    printf("Enter the measurement of the side of the triangle :");
    scanf("%f%f%f",&side1,&side2,&side3);

    if(side1==side2 && side2==side3 && side1==side3)
    {
        printf("Its a equilateral triangle.\n");
    }
    else if(side1==side2 || side2==side3 || side1==side3)
    {
        printf("Its a isosceles triangle.\n");
    }
    else
    {
        printf("Its a scalene triangle.\n");
    }
}

