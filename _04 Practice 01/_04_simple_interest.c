#include<stdio.h>
int main(){
    float principle,time,rate,si;

    //Taking input
    printf("Enter Principle Amount : ");
    scanf("%f",&principle);
    printf("Enter Time in year : ");
    scanf("%f",&time);
    printf("Enter Rate : ");
    scanf("%f",&rate);
    
    //calculating SI
    si = (principle * time * rate)/100;

    printf("The Simple interest is %f",si);
    return 0;
}