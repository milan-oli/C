#include<stdio.h>
int sum(int num1 , int num2);

int main(){
    int a , b , result;

    printf("Enter a Number 1 : ");
    scanf("%d",&a);
    printf("Enter a Number 2 : ");
    scanf("%d",&b);
    
    result = sum(a,b);

    printf("The sum between %d and %d is %d",a,b,result);

    return 0;
}

int sum(int num1 , int num2){
    return num1 + num2;
}