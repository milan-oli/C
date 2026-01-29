#include<stdio.h>
int main(){
    float c,f; // c = Centigrade ; f = Fahrenheit

    //Taking input
    printf("Enter Centigrade degrees : ");
    scanf("%f",&c);

    //converting Celsius
    f = (9/5)*c + 32 ;
    printf("%f degrees Centigrade is %f degrees Fahrenheit ",c,f);
    return 0;
}