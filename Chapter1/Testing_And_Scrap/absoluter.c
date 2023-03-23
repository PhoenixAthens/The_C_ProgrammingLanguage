//
// Created by Anmol Khanna on 23/03/23.
//
#include <stdio.h>
int main(){
    int num=5;
    int mask=num>>31;
    int final=(num+mask)^mask;
    printf("%d",final);
}