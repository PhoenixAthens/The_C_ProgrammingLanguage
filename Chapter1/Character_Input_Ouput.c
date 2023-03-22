//
// Created by Anmol Khanna on 17/03/23.
//
#include <stdio.h>
int main() {
    for (int i = 0; i < 8; i++) {
        //To print character one at a time when inputs are also individual characters.
        int c = getchar();//why int? because of the ASCII thing, putchar will convert int value to apt ASCII character
        getchar(); //when we hit enter the new line character is added to the buffer if this line is removed
        //getchar(), will read the \n and result in confusing behavior
        printf("%d: ", i);
        putchar(c);
        //printf("\n");
    }
    return 0;
}

        /*
         * to print a word character by character
        char c = getchar();
        //getchar(); //when we hit enter the new line character is added to the buffer if this line is removed
        //getchar(), will read the \n and result in confusing behavior
        printf("%d: ",i);
        putchar(c);
        printf("\n");
        * */
        /*
        Example, input = hellow
        output:
        0: h
        1: e
        2: l
        3: l
        4: o
        5: w
        6:
        */