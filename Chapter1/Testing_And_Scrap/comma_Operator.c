//
// Created by Anmol Khanna on 20/09/23.
//
#include <stdio.h>
int main(){
    //int a,b,c=1;
    //printf("%d, %d, %d",a,b,c); //This says "a", "b" are uninitialized!
    int a = 2, b = 3, c =4;
    printf("%d, %d, %d\n",a,b,c); //This works!

    int z = (a>b,b>c,c>a,c);
    printf("%d",z); // 4
    return 0;
}