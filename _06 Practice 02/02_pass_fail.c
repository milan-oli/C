/*Write a program to determine whether a student has passed or failed. To pass, a
 student requires a total of 40% and at least 33% in each subject. Assume there
 are three subjects and take the marks as input from the user. */
#include<stdio.h>
int main(){
    char sub1[50], sub2[50], sub3[50];
    float mark1,mark2,mark3,total,percentage; 
    printf("Enter subject_1 name : ");
    scanf("%s",sub1);
    printf("Enter your marks : ");
    scanf("%f",&mark1);
    printf("Enter subject_2 name : ");
    scanf("%s",sub2);
    printf("Enter your marks : ");
    scanf("%f",&mark2);
    printf("Enter subject_3 name : ");
    scanf("%s",sub3);
    printf("Enter your marks : ");
    scanf("%f",&mark3);

    printf("Your subjects and marks are : \n%s = %.2f\n%s = %.2f\n%s = %.2f\n",sub1,mark1,sub2,mark2,sub3,mark3);
    total = mark1 + mark2 + mark3 ;
    percentage = (total * 100)/300;

    if(percentage >= 40){
        if(mark1>=33 && mark2 >= 33 && mark3 >= 33){
            printf("PASS");
        }
        else{
            printf("FAIL");
        }
    }
    else{
        printf("FAIL");
    }

   

    return 0;
}