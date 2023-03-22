//
// Created by Anmol Khanna on 18/03/23.
//
#include <stdio.h>
int main(){
    int newLines=0;
    int tabs=0;
    int spaces=0;
    int counter=0;
    int rest=0;
    FILE *fp;
    fp=fopen("/Users/anmolkhanna/CLionProjects/The_C_ProgrammingLanguage/Chapter1/CelciusoToFahren.c","r");
    if(fp==NULL) {
        perror("File not found!");
        return -1;
    }else{
        while(counter!=EOF){
            counter=getc(fp);
            if(counter == '\n')newLines++;
            else if(counter==' ')spaces++;
            else if(counter=='\t')tabs++;
            else rest++;
        }
        fclose(fp);
        printf("{\n"
               "\tLines: %d,\n"
               "\tSpaces: %d,\n"
               "\tTabs: %d,\n"
               "\tRest: %d\n"
               "}",newLines,spaces,tabs,rest);
        return 0;
    }

}