#include <stdio.h>
int main(){
    long characterCount;
    for(characterCount=0;getchar()!=EOF;characterCount++);
    printf("Characters counter: %ld\n",characterCount);
}