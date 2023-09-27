#include <stdio.h>
#define length 80
#include <string.h>
int charCounter(char store[]);
int main(){
    char mainStore[length];
    int len;
    while((len=charCounter(mainStore))>0){
        memset(mainStore,'\0',sizeof(mainStore));
    };
    return 0;
}
int charCounter(char store[]){
    char c;
    int i;
    int j=0;
    int _j=0;
    char tempBuffer[2000];
    char tempTempBuffer[2000];
    for(i=0;i<length-1 && (c=getchar())!=EOF && c!='\n';i++){
        store[i]=c;
    }
    store[i++]='\0';
    if(i==80 && c!='\n'){
        j = 0;
        while((c=getchar())!=EOF && c!='\n' && j<1999){
            tempBuffer[j++]=c;
        }
        tempBuffer[j++]='\0';
        if(j==2000 && c!='\n'){
            _j=0;
            while((c=getchar())!=EOF && c!='\n' && _j<1999){
                tempTempBuffer[_j++]=c;
            }
            tempTempBuffer[_j++]='\0';
        }
        printf("%s%s",store,tempBuffer);
        printf("\n Last Line length: %d\n",i+j+_j);
    }
    return i+j+_j;
}