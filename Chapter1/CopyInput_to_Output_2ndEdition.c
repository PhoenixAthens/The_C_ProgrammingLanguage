/*Copy input to output; 2nd edition*/
//printf("%d",EOF); -1
#include <stdio.h>
int main(){
    int c;
    while((c=getchar())!=EOF){
        putchar(c);
    }
    return 0;
}