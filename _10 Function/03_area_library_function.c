/*
Use the library function to calculate the area of a square with side a.
*/
#include<stdio.h>
#include<math.h>
int main(){

    int side,area;
    
    printf("Enter side of a square : ");
    scanf("%d",&side);

    area = pow(side,2);

    printf("Area of square : %f",area);

    return 0;
}