//
// Created by Anmol Khanna on 20/03/23.
//
//Exercise 1.12
//This code has issues!!
#include <stdio.h>
#define IN 1
#define OUT 0
int main(){
    FILE *fp;
    fp=fopen("/Users/anmolkhanna/CLionProjects/The_C_ProgrammingLanguage/Chapter1/CelciusoToFahren.c","r");
    int state;
    int present=0;
    while((present=getc(fp))!=EOF){
        if((present!='\t'||present!='\n') && present==' '){
            putchar('\n');
        }else{
            putchar(present);
        }
    }
}