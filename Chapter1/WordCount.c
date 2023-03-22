//
// Created by Anmol Khanna on 20/03/23.
//
// Exercise on page 20
#include <stdio.h>
#define IN 1
#define OUT 0
int main(){
    FILE *file;
    file=fopen("/Users/anmolkhanna/CLionProjects/The_C_ProgrammingLanguage/Chapter1/CelciusoToFahren.c","r");
    int state,wc,presentChar;
    state=OUT;
    wc=0;
    while((presentChar=getc(file))!=EOF){
        if(presentChar=='\n'||presentChar=='\t'||presentChar==' '){
            state=OUT;
        }else if(state==OUT){
            state=IN;
            wc++;
        }
    }
    printf("Number of characters: %d",wc);
}