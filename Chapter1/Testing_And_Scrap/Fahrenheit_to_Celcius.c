//
// Created by Anmol Khanna on 13/07/23.
//
#include <stdio.h>
float FahrenheitToCelcius(float);
int main(){
    float lower, upper, jump;
    lower = 0;
    upper = 300;
    jump = 20;
    while(lower<=upper){
        printf("%3.0f %6.1f\n",lower, FahrenheitToCelcius(lower));
        lower+=jump;
    }
    return 0;
}
float FahrenheitToCelcius(float temp){
    return (9.0/5.0)*(temp-32);
}