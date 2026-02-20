#include<stdio.h>

int factorial(int num);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,factorial(num));
    return 0;
}
int factorial(int num){
    int fact = 1;
    if(num == 0){
        return 1;
    }
    fact = num * factorial(num-1);
    return fact;
    
}