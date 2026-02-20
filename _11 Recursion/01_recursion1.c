#include<stdio.h>

void printHw(int num);

int main(){
    printHw(10);
    return 0;
}

void printHw(int num){
    if(num == 0){
        return;
    }
    printf("Hello World!\n");
    printHw(num-1);
}