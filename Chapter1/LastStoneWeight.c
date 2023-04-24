//
// Created by Anmol Khanna on 24/04/23.
//
#include <stdlib.h>
//Runtime:4ms beats 42.71%, Memory: 6MB beats 6.25%
int lastStoneWeight(int* stones, int stonesSize){
    while(stonesSize>1){
        int max1,max2,max1Index,max2Index;
        if(stones[0]>=stones[1]){
            max2 = stones[0];
            max1 = stones[1];
            max2Index = 0;
            max1Index = 1;
        }else{
            max2 = stones[1];
            max1 = stones[0];
            max2Index = 1;
            max1Index = 0;
        }
        for(int i=2;i<stonesSize;i++){
            if(stones[i]>max2){
                max1 = max2;
                max1Index = max2Index;
                max2= stones[i];
                max2Index = i;
            }else if(stones[i]>max1){
                max2=stones[i];
                max2Index = i;
            }
        }
        stones[max1Index]=-27;
        if(max2==max1){
            stones[max2Index]=-27;
            int *temp= malloc((stonesSize-2)*sizeof(int));
            int cnt=0;
            for(int i=0;i<stonesSize;i++){
                if(stones[i]!=-27){
                    temp[cnt++]=stones[i];
                }
            }
            stonesSize-=2;
            free(stones);
            stones = temp;
        }else{
            stones[max2Index]=max2-max1;
            int *temp= malloc((stonesSize-1)*sizeof(int));
            int cnt=0;
            for(int i=0;i<stonesSize;i++){
                if(stones[i]!=-27){
                    temp[cnt++]=stones[i];
                }
            }
            stonesSize-=1;
            free(stones);
            stones = temp;
        }

    }
    if(stonesSize==1)return stones[0];
    else return 0;
}
