#include<stdio.h>
int main(){
    int num1,num2;
    //Taking input
    printf("Enter a number to be divide : ");
    scanf("%d",&num1);
    printf("Enter a number to divisible by : ");
    scanf("%d",&num2);
    //applying condition
    if(num1 % num2 == 0)
        printf("%d is divisible by %d",num1,num2);
    else
        printf("%d is not divisible by %d",num1,num2);
    return 0;
}