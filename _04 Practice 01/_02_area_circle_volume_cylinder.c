/*
Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.
*/

#include <stdio.h>
int main()
{
    const float pi = 3.14159;
    float r, h, area, volume; // r = radius ; h = height
    // Taking input
    printf("Enter radius : ");
    scanf("%f", &r);
    printf("Enter height : ");
    scanf("%f", &h);

    // Area of Circle
    area = pi * r * r;
    printf("%f\n", area);

    // volume of cylinder
    volume = pi * r * r * h;
    printf("%f\n", volume);

    return 0;
}