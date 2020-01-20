#include<stdio.h>
int main()
{
    int x,y;

    {
        printf("Enter the coordinate of the point (x,y):");
        scanf("%d %d",&x,&y);
        {
            if(x>0 && x>0)
            {
                printf("The point lies in 1st quadrant.\n");
            }
            else if(x>0 && y<0)
            {
                printf("The point lies in 4th quadrant.\n");
            }
            else if(x<0 && y<0)
            {
                printf("The point lies in 3rd quadrant.\n");
            }
            else if (x<0 && y>0)
            {
                printf("The point lies in 2nd quadrant,\n ");
            }
            else
            {
                printf("The point lies in origin.\n");
            }
            system("pause");
        }

    }
}
