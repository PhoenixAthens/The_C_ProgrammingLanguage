#include <stdio.h>
#define IN 1
#define OUT 0
int main(){
    int c, Words;
    Words = 0;
    int state = OUT;
    while((c=getc(stdin))!=EOF){
        if(c==' ' || c == '\t' || c == '\n')state=OUT;
        else if(!state){ //this else-if prevents us from counting double blank as a word, because if will not allow
            Words++;//else if to execute!
            state = IN;
        }
    }
    printf("Word count: %d",Words);
}