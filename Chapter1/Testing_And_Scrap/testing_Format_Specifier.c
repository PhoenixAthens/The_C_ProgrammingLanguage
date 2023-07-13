//
// Created by Anmol Khanna on 17/04/23.
//
#include <stdio.h>
int main() {
    char arr[10];
    printf("%s", "What's your name\n");
    scanf("%8s",arr);//if we have just 8s then only 8 chars will be read, rest will be discarded
    printf("%s",arr);
    //if in above program we enter more than 10 characters we get nothing from printf, program ends after line 8
}

