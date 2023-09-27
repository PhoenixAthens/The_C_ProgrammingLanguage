#include <stdio.h>
#define MaxLen 1000
int getLen(char tempStorage[]);
void copy(char source[], char drain[]);
int main(){
    char tempMain[MaxLen];
    char storage[MaxLen];
    int c, max;
    max = 0;
    while((c = getLen(tempMain))>0){
        if(c > max){
            max = c;
            copy(tempMain,storage);
        }
    }
    printf("Longest String-> %s",storage);
    return 0;
}
int getLen(char tempStore[]){
    int limit = MaxLen;
    int i,c;
    for(i=0;i<limit-1 && (c=getchar())!=EOF && c!='\n';++i){
        tempStore[i]=c;
    }
    if(c=='\n'){
        tempStore[i]=c;
        ++i;
    }
    tempStore[i]='\0';
    return i;
}
void copy(char source[], char drain[]){
    int i=0;
    while((drain[i]=source[i])!='\0'){
        i++;
    }
}
