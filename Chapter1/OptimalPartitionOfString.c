//
// Created by Anmol Khanna on 04/04/23.
//
// Runtime: 16ms beats 50%, Memory: 6.9MB beats 62.50%
#include <stdio.h>
#include <string.h>
int partitionString(char* );
int main(){
    int result= partitionString("ssssss");
    printf("Result: %d",result);
    return 0;

}
int partitionString(char* s){
    int arr[26];
    for(int j=0;j<26;j++){arr[j]=0;}
    int i=0;
    int count=0;
    int n=strlen(s);
    while(i<n){
        if(arr[s[i]-'a']==1){
            count++;
            for(int j=0;j<26;j++){
                arr[j]=0;
            }
        }
        arr[s[i]-'a']=1;
        i++;
    }
    return count+1;
}