//
// Created by Anmol Khanna on 21/03/23.
//
#include <stdio.h>
//Exercise 1.14
int main(){
    FILE *fp;
    fp=fopen("/Users/anmolkhanna/CLionProjects/The_C_ProgrammingLanguage/Chapter1/histo.txt","r");
    int len[10];
    for(int i=0;i<10;i++)len[i]=0;
    int c;
    int presentIndex=0;
    while((c=getc(fp))!=EOF){
        if(c==' ' || c=='\n' || c=='\t'){
            presentIndex++;
        }else{
            len[presentIndex]++;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",len[i]);
    }
    printf("%c",'\n');
    int maxi=0;
    for(int i=0;i<10;i++){
        if(len[i]>maxi)maxi=len[i];
    }
    for(int i=0;i<maxi;i++){
        for(int j=9;j>=0;j++){
            if(len[j]!=0){
                len[j]--;
                printf("%c ",'&');
            }
        }
        printf("%c",'\n');
    }

}