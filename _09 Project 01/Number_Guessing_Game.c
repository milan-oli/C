#include <stdio.h>
//C uses the function rand() from stdlib.h.
#include <stdlib.h>
//To make numbers actually random, seed it using time.
#include<time.h>
int main(){

    int  randomNumber , guessedNumber , count = 0 ;

    srand(time(0));     //different numbers each run

    //Random number from 1 to 100
    randomNumber = rand() % 100 + 1;

    do{
        count++;
        printf("Enter a Number : ");
        scanf("%d", &guessedNumber);

       
        if(guessedNumber > randomNumber){
            printf("Enter smaller number .\n");
        }
        else if(guessedNumber < randomNumber){
            printf("Enter greater number .\n");
        }
        else{
            printf("Congrats !!\n");
        }
    }
    while(guessedNumber != randomNumber);

    printf("In %d tries you guessed the number %d.\n", count, randomNumber);


   
    return 0;
}