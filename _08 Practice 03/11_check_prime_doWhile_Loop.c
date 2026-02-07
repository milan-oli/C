/*
Write a program to check whether a given number is prime or not using do while loops.
*/
#include<stdio.h>
int main(){
    int num , count = 0 , i = 1 ;
    printf("Enter a number : ");
    scanf("%d",&num);

   do{

        if(num % i == 0){
            count++;
        }
        i++;

    }
    while(i <= num );

    if(count == 2){
        printf("%d is a prime number.",num);
    }
    else{
        printf("%d is not a prime number.",num);
    }
    return 0;
}