#include<stdio.h>
int main()
{
    int math,phy,chem,total=0;

    {
    printf("Enter the marks in math :");
    scanf("%d",&math);

    printf("\nEnter the marks in physics :");
    scanf("%d",&phy);

    printf("\nEnter the marks in chemistry :");
    scanf("%d",&chem);
    }

    total=math+phy+chem;

    if(math>=65 && phy>=55 && chem>=50)
    {
        if(total>=180 || math+phy>=140 || math+chem>=140)
        {
            printf("You are eligible for admission.\n");
        }
        else{printf("You are not eligible for admission.\n");}

    }
    else{printf("You are not eligible for admission.\n");}
    system("pause");

}


