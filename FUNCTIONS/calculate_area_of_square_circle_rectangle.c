#include<stdio.h>

float areaofsquare(float side);
float areaofcircle(float rad);
float areaofrectangle(float l,float b);

int main()
{
    float l=5.0,b=4.0;
    printf("Area of rectangle is:%f\n",areaofrectangle(l,b));
    float rad=5.0;
    printf("Area of circle is:%f\n",areaofcircle(rad));
    float side=8;
    printf("Area of square is:%f",areaofsquare(side));
    return 0; 
}
float areaofsquare(float side)
{
    return side * side;
}
float areaofcircle(float rad)
{
    return 3.14*rad*rad;
}
float areaofrectangle(float l,float b)
{
    return l*b;
}