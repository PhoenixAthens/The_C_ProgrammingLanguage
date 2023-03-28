//
// Created by Anmol Khanna on 28/03/23.
//
#include <stdio.h>
// this is just the syntax
//Why declare it here?
//C program is read from top to bottom, in order to use it in main,
//it has to be declared before main, this is a way around that problem, specify here, declare later

//What if we run it though?
//You will get a error as follows:
/*
Undefined symbols for architecture arm64:
  "_power", referenced from:
      _main in Exponentiation-3a4f43.o
ld: symbol(s) not found for architecture arm64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
 *
 * */
int power(int base, int power);
int main(){
    for(int i=0;i<10;i++){
        printf(" 2^%d: %d; 3^%d: %d.\n",i,power(2,i),i,power(3,i));
    }
    return 0;
}
int power(int base, int power){
    if(power == 0){
        return 1;
    }
    int result=base;
    for(int i=1;i<power;i++){
        result*=base;
    }
    return result;
}
