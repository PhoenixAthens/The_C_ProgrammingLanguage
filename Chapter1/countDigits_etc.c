//
// Created by Anmol Khanna on 21/03/23.
//
#include <stdio.h>
int main(){
    int c,nOther,nWhite;
    int nDigit[10];
    for(int i=0;i<10;i++){
        nDigit[i]=0;
    }
    FILE *fp;
    c=nOther=nWhite=0;
    fp=fopen("/Users/anmolkhanna/CLionProjects/The_C_ProgrammingLanguage/Chapter1/Character_Input_Ouput.c","r");
    while((c=getc(fp))!=EOF){
        if(c>='0' && c<='9'){
            nDigit[c-'0']++;
        }else if(c==' '||c=='\n'||c=='\t'){
            nWhite++;
        }else{
            nOther++;
        }
    }
    printf("WhiteSpace: %d\nOtherCharacters: %d\n",nWhite,nOther);
    printf("Digits: ");
    for(int i=0;i<10;i++){
        printf("%d ",nDigit[i]);
    }

}