/*
Write a program to calculate the factorial of a given number using a for loop
*/
#include<stdio.h>
int main(){
    int n,fact=1,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i++){
        fact*=i;
    }
    printf("%d",fact);
    return 0;
}