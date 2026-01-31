#include<stdio.h>
#include<math.h>
float squareArea(float side);
float circleArea(float red);
float rectangleArea(float a,float b);

int main ()
{
    float red,a,b,side;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    printf("Enter the value of red:");
    scanf("%f",&red);
    printf("Enter the value of side:");
    scanf("%f",&side);
    printf("Area is : %.2f\n",rectangleArea(a, b));
    printf("Area is : %.2f\n",squareArea(side));
    printf("Area is : %.2f\n",circleArea(red));

    return 0;
}
float squareArea(float side)
{
    return side * side;
}
float circleArea(float red)
{
    return  3.14 * red * red;
}
float rectangleArea(float a,float b)
{
    return a*b;
}
