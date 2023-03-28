//
// Created by Anmol Khanna on 28/03/23.
//
#include <stdio.h>
int power(int, int);
int main(){
    printf("2^5: %d",power(2,5));
    return 0;
}
int power(int base, int power){
    int result=1;
    for(int i=0;i<power;i++)result*=base;
    return result;
}
