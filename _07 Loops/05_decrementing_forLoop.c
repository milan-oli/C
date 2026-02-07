/*
 Write a program to print ‘n’ natural numbers in reverse order.
*/

#include<stdio.h>
int main(){
    int i, n;
    printf("Enter N : ");
    scanf("%d",&n);
    for(i = n ; i >= 1 ; i--){
        printf("%d\n",i);
    }
    return 0;
}