/*
    Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
    earth. Consider g = 9.8m/s2
*/
#include<stdio.h>
float force(float m){
    return m * 9.8;
}
int main(){
    float m;
    printf("Enter value of Mass : ");
    scanf("%f",&m);
    printf("The force of attraction on a body of mass %.3f id %.3f",m,force(m));
    return 0;
}