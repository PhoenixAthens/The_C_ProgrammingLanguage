//
// Created by Anmol Khanna on 15/03/23.
//
//Exercise on page 8
#include <stdio.h>
int main(){
    for(int i=0;i<400;i+=20){
        int celcius=(5*(i-32))/9;
        printf("%d : %d \n",i,celcius);
    }
}