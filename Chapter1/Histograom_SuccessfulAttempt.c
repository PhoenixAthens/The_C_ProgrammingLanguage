//
// Created by Anmol Khanna on 22/03/23.
//
#include <stdio.h>
// Exercise 1.14
int main(){
    int array[52];
    for(int i=0;i<52;i++){
        array[i]=0;
    }
    FILE *fp;
    fp=fopen("/Users/anmolkhanna/CLionProjects/The_C_ProgrammingLanguage/Chapter1/countDigits_etc.c","r");
    int present=0;
    while((present=getc(fp))!=EOF){
        if(present>=65 && present<=90)
            array[present-'A']++;
        else if(present>=97 && present<=122)
            array[(present-'a')+26]++;
    }
    for(int i=52;i>0;i--){
        for(int j=0;j<52;j++){
            int cond=array[j]>=i;
            if(cond)printf("%c ",'#');
            else printf("%c ",' ');
        }
        printf("%c",'\n');
    }
    for(int i=65;i<122;i++){
        printf("%c ",i);
        if(i==90)i=96;
    }
}
