//
// Created by Anmol Khanna on 13/07/23.
//
#include <stdio.h>
float converter(float);
int main(){
    float FahrenheitLowerBound = 10;
    float FahrenheitUpperBound = 300;
    float step = 10;
    printf("Converting temperature from Celsius to Fahrenheit \n");
    printf("Celsius \t Fahrenheit\n");
    while(FahrenheitLowerBound<=FahrenheitUpperBound){
        printf("%3.1f \t\t %6.2f\n",FahrenheitLowerBound,converter(FahrenheitLowerBound));
        FahrenheitLowerBound+=step;
    }
    return 0;
}
float converter(float temp){
    return (9.0/5.0)*temp+32;
}