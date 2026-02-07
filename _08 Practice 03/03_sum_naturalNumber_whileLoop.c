/*
Write a program to sum first n natural numbers using while loop.
*/
#include<stdio.h>
int main(){
    int n, i = 0 ,sum = 0;
    printf("Enter N : ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("%d",sum);
    return 0;
}