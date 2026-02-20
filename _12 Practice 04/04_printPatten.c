/*
    Write a program using function to print the following pattern (first n lines)
    *
    * * *
    * * * * *
*/
#include<stdio.h>

void patten(int n){

    int i , j;
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }

}

int main(){
    int n;
    printf("Enter no. of line to print : ");
    scanf("%d",&n);
    patten(n);
    return 0;
}