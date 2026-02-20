// Write a program using function to find average of three numbers.

#include<stdio.h>

float average(float num1, float num2, float num3);

int main(){
    float num1, num2, num3 ;
    float avg;
    printf("Enter three number : ");
    scanf("%f %f %f",&num1,&num2,&num3);
    avg = average(num1,num2,num3);
    printf("The average of %.3f , %.3f , %.3f is %.3f",num1,num2,num3,avg);
    return 0;
}

float average(float num1, float num2, float num3){
    return (num1 + num2 + num3)/3;
}
