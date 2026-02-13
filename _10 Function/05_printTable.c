#include<stdio.h>

void printTable();

int main(){
    int num;

    printf("Enter a Number : ");
    scanf("%d",&num); // argument / actual parameter

    printTable(num);

    return 0;
}
void printTable(int num){  // parameter / formal parameter
    for(int i = 1 ; i <= 10 ; i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
}