//Program to find Area and Perimeter of Circle,Square and Rectangle
//header file
#include<stdio.h>
int main()
{
    float r;
    float s;
    float l,b;
//Area and Perimter of Circle
//Output statement
    printf("\nfind the area and perimeter of circle");
    printf("\nradius of the circle:");
//Input statement    
    scanf("%f",&r);
//output statement
    printf("\nArea of circle is: %f",3.14*r*r);
    printf("\nperimeter of a circle is: %f",2*3.14*r);
//Area andd Perimeter of square
//output statement
    printf("\nFind the Area and perimeter of square:");
    printf("\nSide of the square:");
//input statement    
    scanf("%f",&s);
//output statement
    printf("\nArea of square is:%f",s*s);
    printf("\nperimeter of a square is: %f,4*s");
//Area and Perimeter of rectangle
//output statement
    printf("\nFind the area and perimeter of rectangle:");
    printf("\nLength of the rectangle:");
//input statement    
    scanf("%f",&l);
//output statement
    printf("\nBreath of the rectangle:");
//input statement
    scanf("%f",&b);
//output statement
    printf("\nArea of a rectangle is: %f",l*b);
    printf("\nPerimeter of a rectangle is: %f",2*(l+b));

    return 0;

}