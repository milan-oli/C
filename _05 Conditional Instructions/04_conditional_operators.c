#include<stdio.h>
int main(){
    int age ;

    printf("Enter your age : ");
    scanf("%d",&age);

    (age>10)?printf("Condition is true\nAge is greater than 10"):printf("Condition is false\nAge is smaller or equal to 10");
    return 0;
}