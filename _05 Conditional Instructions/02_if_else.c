#include<stdio.h>
int main(){
    int age ;

    printf("Enter your age : ");
    scanf("%d",&age);

    if(age>10){
        printf("your are inside a if\n");
        printf("Your age is %d year greater than 10\n",age-10);

    }
    else{
        printf("You are inside else\n");
        printf("Your age is smaller than or equal to 10.\n");
    }
    return 0;
}