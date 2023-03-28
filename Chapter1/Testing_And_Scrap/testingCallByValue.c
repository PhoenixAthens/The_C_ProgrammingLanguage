//
// Created by Anmol Khanna on 28/03/23.
//
#include <stdio.h>
#include <stdlib.h>
void alterArray(int[]);
int main(){
    int arr[10];
    for(int i=0;i<10;i++)arr[i]=i;
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    alterArray(arr);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}
void alterArray(int array[]){
    array[0]=23;
    array[1]=46;
    array[2]=92;
    array[3]=184;
}

