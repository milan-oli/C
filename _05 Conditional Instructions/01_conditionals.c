#include<stdio.h>
int main(){
    int age ;

    printf("Enter your age : ");
    scanf("%d",&age);

    if(age>10){
        printf("your are inside a if\n");
        printf("Your age is %d year greater than 10\n",age-10);

    }
    if(age%5==0){
        printf("You are inside another if\n");
        printf("Your age is divisible by 5.\n");
    }
    return 0;
}