/*
 Write a program to print multiplication table of 10 in reversed order.
*/

#include<stdio.h>
int main(){
    int n , i;

    printf("Enter N : ");
    scanf("%d",&n);

    for(i = n ; i >= 1 ; i-- ){
        printf("10 * %d = %d\n",i,10*i);
    }

    return 0;
}