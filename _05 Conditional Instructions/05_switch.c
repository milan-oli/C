#include<stdio.h>
int main(){
    int num1;
    printf("Enter a number for day (1 to 7 , 1 for sunday .....) : ");
    scanf("%d",&num1);
    switch (num1)
    {
    case 1:
        printf("Today is sunday");
        break;
    case 2:
        printf("Today is Monday");
        break;
    case 3:
        printf("Today is Tuesday");
        break;
    case 4:
        printf("Today is Wednesday");
        break;
    case 5:
        printf("Today is Thursday");
        break;
    case 6:
        printf("Today is Friday");
        break;
    case 7:
        printf("Today is Saturday");
        break;
    
    default:
        printf("You entered number out of 1 to 7");
        break;
    }

    return 0;
}