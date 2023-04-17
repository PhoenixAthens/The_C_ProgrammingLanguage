//
// Created on 17/04/23.
//
#include <stdio.h>
#include <stdbool.h>
#include <malloc/_malloc.h>
//Runtime: 3ms beats 80.38%, Memory: 6.4MB beats 22.69%
bool* kidsWithCandies(int* , int, int, int*);
int main(){
    int ar[5]={2,3,5,1,3};
    bool* result = kidsWithCandies(ar,5,3,NULL);
    for(int i=0;i<5;i++){
        printf("%d\n",result[i]);
    }
}
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    bool* array=malloc(candiesSize*sizeof(int));
    /*for(int i=0;i<candiesSize;i++){
        array[i]=false;
    }*/
    int max=0;
    for(int i=0;i<candiesSize;i++){
        if(candies[i]>max)max=candies[i];
    }
    for(int i=0;i<candiesSize;i++){
        if(candies[i]+extraCandies>=max)array[i]=true;
        else array[i]=false;
    }
    return array;
}