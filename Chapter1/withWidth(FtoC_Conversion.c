//
// Created by Anmol Khanna on 15/03/23.
//
#include <stdio.h>
int main(){
    for(int i=0;i<=300;i+=20){
        int cel=(5*(i-32))/9;
        printf("%3d %10d \n",i,cel);
    }
    return 0;
}