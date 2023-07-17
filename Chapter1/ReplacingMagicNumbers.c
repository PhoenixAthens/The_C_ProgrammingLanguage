#include <stdio.h>
#define LOWER 0.0
#define UPPER 300.0
#define STEP 20.0
#define FRACTION 5.0/9.0
#define REMOVALFactor 32.0
int main(){
    float fahrenheit;
    printf("Fahrenheit -> Celsius\n");
    for(fahrenheit = LOWER; fahrenheit<=UPPER; fahrenheit+=STEP){
        printf("%6.0f\t   -> %6.1f\n",fahrenheit,FRACTION*(fahrenheit-REMOVALFactor));
    }
    return 0;
}