#include<stdio.h>
int main()
{
    int roll_no,total,phy,chem,math;
    float percentage;
    char name[20];

    printf("Enter the name :");
    gets(name);

    printf("\nEnter the roll number :");
    scanf("%d",&roll_no);

    printf("\nEnter the marks in Physics :");
    scanf("%d",&phy);
    printf("\nEnter the marks in chemistry :");
    scanf("%d",&chem);
    printf("\nEnter the marks in math :");
    scanf("%d",&math);

    total=phy+chem+math;

    percentage=(total/3.0);

    printf("The total marks obtained is %d\n",total);
    printf("The percentage obtained is %f \n",percentage);

    {
    if(percentage>=90){printf("The grade obtained is A+.");}
    else if(percentage>=80 && percentage<90){printf("The grade obtained is A.");}
    else if(percentage>=70 && percentage<80){printf("The grade obtained is B+.");}
    else if(percentage>=60 && percentage<70){printf("The grade obtained is B.");}
    else if(percentage>=50 && percentage<60){printf("The grade obtained is C+.");}
    else if(percentage>=40 && percentage<50){printf("The grade obtained is C.");}
    else if(percentage>=30 && percentage<40){printf("The grade obtained is D+.");}
    else if(percentage>=20 && percentage<30){printf("The grade obtained is D");}
    else (percentage>=10 && percentage<20){printf("The grade obtained is E.");}
    }

}
