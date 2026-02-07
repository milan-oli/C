/*Write a program to find grade of a student given his marks based on below:
90 – 100 => A
80 – 90 => B
70 – 80 => C
60 – 70 => D
50 – 60 => E
<50 => F        */
#include<stdio.h>
int main(){
    float mark;
    char grade;
    printf("Enter your Marks : ");
    scanf("%f",&mark);
    if(mark <= 100 && mark >= 90){
        grade = 'A';
    }
    else if(mark < 90 && mark >= 80){
        grade = 'B';
    }
    else if(mark < 80 && mark >= 70){
        grade = 'C';
    }
    else if(mark < 70 && mark >= 60){
        grade = 'D';
    }
    else if(mark < 60 && mark >= 50){
        grade = 'E';
    }
    else{
        grade = 'F';
    }
    printf("Your grade is %c.",grade);
    return 0;
}