#include <stdio.h>
#define IN 1
#define OUT 0
int main(){
    FILE *fp;
    fp = fopen("/Users/anmolkhanna/CLionProjects/The_C_ProgrammingLanguage/Chapter1/Testing_And_Scrap/sample.txt","r");
    int arr[1000];
    for(int i=0;i<1000;i++)arr[i]=0;
    int characterAtPresent;
    //int state = IN;
    int numberOfWords=0;
    int WordLen = 0;
    while((characterAtPresent = getc(fp)) != EOF){
        if(characterAtPresent=='\n' || characterAtPresent==' ' || characterAtPresent=='\t' || characterAtPresent=='.' || characterAtPresent==',') {
            if(WordLen!=0){
                arr[numberOfWords++]=WordLen;
                WordLen = 0;
            }
        }else{
            WordLen++;
        }
    }
    int i=0;
    while(arr[i]!=0){
        printf("WordLength: %d\n",arr[i++]);
    }
    int max = 0;
    for(int j=0;arr[j]!=0;j++){
        max = (max>arr[j])?max:arr[j];
    }
    //DO your magic in this 2-dim array
    int arrGraphic[i-1][max];
    for(int k=0;k<i;k++){
        for(int h=0;h<max;h++){
            arrGraphic[k][h]=0;
        }
    }
}
