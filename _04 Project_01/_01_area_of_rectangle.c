/*
Write a C program to calculate area of a rectangle:
a. Using hard coded inputs.
b. Using inputs supplied by the user.
*/

#include<stdio.h>
int main(){
    float len,wid,area;     // len = length ; wid = width ;
    //Taking input
    printf("Enter a Length of rectangle : ");
    scanf("%f",&len);
    printf("Enter a Width of rectangle : ");
    scanf("%f",&wid);

    //area of rectangle
    area = len * wid;
    printf("The area of Rectangle is %f.",area);

    return 0;
}