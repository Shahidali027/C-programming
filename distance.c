//Program to find Euclidean distance between two points on a plane
#include <stdio.h> //Header file
#include <math.h>  //Header file
int main()
{
    int x1,x2,y1,y2;
    //Output Statement
    printf("enter value of co-ordinates of x-axis");
    //Input Statement
    scanf("%d%d",&x1,&y1);
    //Output Statement
    printf("enter value of co-ordinates of y-axis");
    //Input Statement
    scanf("%d%d",&x2,&y2);

    float distance = sqrt(pow (x2-x1,2)+(pow (y2-y1,2)));
    //Output Statement
    printf("The Euclidean distance between two point on plane: %1d",distance);

    return 0;
}
