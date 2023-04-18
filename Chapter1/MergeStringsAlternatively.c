//
// Created by Anmol Khanna on 18/04/23.
//
//Runtime: 0ms beats 100%, Memory: 6MB beats 6.35%
#include <stdio.h>
#include <stdlib.h>
char * mergeAlternately(char * word1, char * word2){
    int len1=0;
    while(word1[len1]!='\0'){
        len1++;
    }

    int len2=0;
    while(word2[len2]!='\0'){
        len2++;
    }

    char* array=malloc((len1+len2+1)*sizeof(char));
    if(len1>len2){
        int i=0;
        int count=0;
        while(i<len2){
            array[count++]=word1[i];
            array[count++]=word2[i];
            i++;
        }
        while(i<len1){
            array[count++]=word1[i];
            i++;
        }
    }else if(len2>len1){
        int i=0;
        int count=0;
        while(i<len1){
            array[count++]=word1[i];
            array[count++]=word2[i];
            i++;
        }
        while(i<len2){
            array[count++]=word2[i];
            i++;
        }
    }else{
        int i=0;
        int count=0;
        while(i<len1){
            array[count++]=word1[i];
            array[count++]=word2[i];
            i++;
        }
    }
    return array;
}
int main(){
    printf("Word: %s", mergeAlternately("abc","pqr"));
}