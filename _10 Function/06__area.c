/*
write function to calculate area of square , a circle and a rectangle.
*/

#include<stdio.h>
#include<math.h>

float area_square(float length);
float area_circle(float radius);
float area_rectangle(float length, float width);

int main(){
    float length1 , radius , length2 , width;
    printf("Enter length of a square : ");
    scanf("%f",&length1);
    printf("Enter radius of a circle : ");
    scanf("%f",&radius);
    printf("Enter length of a rectangle : ");
    scanf("%f",&length2);
    printf("Enter width of a rectangle : ");
    scanf("%f",&width);

    printf("Area of a square is %.3f\n",area_square(length1));
    printf("Area of a circle is %.3f\n",area_circle(radius));
    printf("Area of a rectangle is %.3f\n",area_rectangle(length2,width));
    return 0;
}
float area_square(float length)
{
    float area;
    area = pow(length,2);
    return area;
}
float area_circle(float radius)
{
    float area;
    const float pi = 3.141 ;
    area = pi * pow(radius,2);
    return area;

}
float area_rectangle(float length, float width)
{
    float area;
    area = length * width ;
    return area;
}