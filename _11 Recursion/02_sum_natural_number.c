// Find sum of first n Natural number

#include<stdio.h>

int sum(int num);

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    printf("The sum of first %d natural number is %d.",num,sum(num));

    return 0;
}
int sum(int num){
    int result = 0;
    if(num == 1){
        return 1;
    }
   result = num + sum(num-1);
   return result;
   
}