/*
Write a program to print multiplication table of a given number n
*/
#include<stdio.h>
int main(){
    int m , n , i;
    printf("Enter M : ");
    scanf("%d",&m);
    
    printf("Enter N : ");
    scanf("%d",&n);

    for(i = 1 ; i <= n ; i++ ){
        printf("%d * %d = %d\n",m,i,m*i);
    }

    return 0;
}