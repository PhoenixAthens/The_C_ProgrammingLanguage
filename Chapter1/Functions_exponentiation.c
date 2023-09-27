#include <stdio.h>
int power(int base, int exponent);
int main(){
    for(int i=0;i<10;i++){
        printf("2^%d -> %d and -3^%d -> %d\n",i,power(2,i),i,power(-3,i));
    }
    return 0;
}
int power(int base, int exponent){
    int p = 1;
    for(int i=1;i<=exponent;i++){
        p*=base;
    }
    return p;
}
