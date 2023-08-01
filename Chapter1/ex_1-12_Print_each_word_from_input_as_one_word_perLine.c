#include <stdio.h>
/* This cause trouble when input contains double blanks
int main(){
    int c;
    while((c=getc(stdin))!=EOF){
        if(c=='\n'||c==' '||c=='\t')printf("\n");
        else printf("%c",c);
    }
    return 0;
}
*/
#define IN 1
#define OUT 0
int main(){
    int c;
    int counterOfOut = 1;
    while((c=getc(stdin))!=EOF){
        if(c==' '||c=='\t'||c=='\n'){
            counterOfOut++;
            if(counterOfOut<2){
                printf("\n");
            }
        }
        else{
            printf("%c",c);
            counterOfOut=0;
        }
    }
}
