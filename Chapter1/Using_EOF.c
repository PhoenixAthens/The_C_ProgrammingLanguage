//
// Created by Anmol Khanna on 17/03/23.
//
// good old buffer conundrum.
#include <stdio.h>
int main(){
    int x;
    while((x=getchar())!='n'){
        printf("%d",x);//we didn't have things on the same line because our while loop is running twice for each character
        putchar(x);//once for the character then for \n
    }

    printf("%c",'\n');
    // value of this is simply a jump, meaning the print statement,
    // and then cursor jumps that and the line text to it
    return 0;
}