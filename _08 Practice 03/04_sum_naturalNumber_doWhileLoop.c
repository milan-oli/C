/*
Write a program to sum first n natural numbers using do while loop.
*/
#include<stdio.h>
int main(){
    int n, i = 0 ,sum = 0;
    printf("Enter N : ");
    scanf("%d",&n);
    do
    {
        sum+=i;
        i++;
    }
    while(i<=n);
    printf("%d",sum);
    return 0;
}