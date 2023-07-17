// using putchar and getchar to read input from the keyboard
// EOF = ctrl + D
#include <stdio.h>
int main(){
    int character = getchar();
    while(character!=EOF){
        putchar(character);
        character = getchar();
    }
    return 0;
}