#include <stdio.h>
int main(){
    char* c="Celcius";
    char* f="Fahrenheit";
    printf("%10s  %10s \n",c,f);
    for(float cel=0;cel<400.0;cel+=20.0){
        float fahrenheit=(cel+32.0)*(9.0/5.0);
        printf("%10.1f %10.1f \n",cel,fahrenheit);
    }
    return 0;
}