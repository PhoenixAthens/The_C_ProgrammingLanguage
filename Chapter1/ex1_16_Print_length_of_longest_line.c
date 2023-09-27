//
// Created by Anmol Khanna on 26/09/23.
//
#include <stdio.h>
int reader();
int main(){
    int maxLen = 0;
    int c;
    while((c=reader())>0){
        maxLen=maxLen<c?c:maxLen;
    }
    printf("Max length: %d",maxLen);
    return 0;
}
int reader(){
    int counter=0;
    int c;
    while((c=getchar()) != EOF && c!='\n')
        counter++;
    if(c=='\n')counter++;
    return counter;

}