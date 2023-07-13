//
// Created by Anmol Khanna on 13/07/23.
//
#include <stdio.h>
float converter(float);
int main(){
    float fahrenheitLowerBound, fahrenheitUpperBound, step;
    fahrenheitLowerBound = 100;
    fahrenheitUpperBound = 500;
    step = 10;
    printf("Converting temperature from Fahrenheit to Celsius\n");
    printf("Fahrenheit \t Celsius\n");
    while(fahrenheitLowerBound<=fahrenheitUpperBound){
        printf("%3.0f \t\t %6.2f\n",fahrenheitLowerBound, converter(fahrenheitLowerBound));
        fahrenheitLowerBound+=step;
    }
    return 0;
}
float converter(float temp){
    return (9.0/5.0)*(temp-32.0);
}