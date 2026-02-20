// Write a function to print n terms of the fibonacci 
#include<stdio.h>

int fibo(int num);

int main(){
    int num;
    printf("Enter a term : ");
    scanf("%d",&num);
    printf("The nth term is %d ",fibo(num));
    return 0;
}
int fibo(int num){
    int fiboN;

        if(num == 0){
            return 0;
        }
        if(num == 1){
            return 1;
        }
        
    
    fiboN = fibo( num - 1 ) + fibo(num - 2) ;
    return  fiboN;
}