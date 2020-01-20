#include<stdio.h>
int main()
{
    float temp;

    printf("Enter the temperature in celsius :");
    scanf("%f",&temp);

    if(temp<0){printf("Freezing temperature.\n");}
    else if(temp>0 && temp<10){printf("Very cold temperature.\n");}
    else if(temp>10 && temp<20){printf("Cold temperature.\n");}
    else if(temp>20 && temp<30){printf("Normal temperature.\n");}
    else if(temp>30 && temp<40){printf("Hot temperature.\n");}
    else{printf("Very hot temperature.\n");}

}
