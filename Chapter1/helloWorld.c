//
// Created by Anmol Khanna on 15/03/23.
//
#include <stdio.h>
int main(){
    printf("Hello World, Phoenix here! \c");//using an unknown escape character only raises a warning but no error!
    printf("Hello World\n"
           "Woahhh");
    printf("\n");
    printf("Hello world ""what's up");//This was automatically concatenated
    char *arr;
    arr = "Hello world ""what's up\n";
    //char array[]={1,2,3};;
    return 0;
}