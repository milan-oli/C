// Write a function to convert Celsius temperature into Fahrenheit.
#include<stdio.h>
float convert(float cels);

int main(){
    float cels, fahr;
    printf("Enter Celsius Temperature : ");
    scanf("%f",&cels);

    fahr = convert(cels);
    printf("%.3f in celsius is equal to %.3f in fahrenheit.",cels,fahr);
    return 0;
}
float convert(float cels){
    return (cels * (9.0/5.0)) + 32 ;
}