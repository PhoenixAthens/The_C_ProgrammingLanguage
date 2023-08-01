#include <stdio.h>
int main(){
    int c; //' ' == 32 in ASCII table, \t = 9
    int counter = 0;
    while((c=getchar())!=EOF){
        if(c==32){
            counter++;
        }else{
            counter = 0;
        }
        if(counter<2)printf("%c",c);
    }
    printf("\n");
    return 0;
}