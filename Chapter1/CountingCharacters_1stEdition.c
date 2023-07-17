/* count characters in input; 1st version*/
#include <stdio.h>
int main(){
    long numberOfCharacter = 0;
    while(getchar()!=EOF)
        ++numberOfCharacter;
    printf("Number of characters recorded: %ld",numberOfCharacter);
    return 0;
}