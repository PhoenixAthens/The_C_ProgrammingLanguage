#include <stdio.h>
int main(){
    long blanks,tabs,newLines;
    int presentCharacter;
    blanks = tabs = newLines = 0;
    while((presentCharacter = getchar())!=EOF){
        if(presentCharacter == '\n')newLines++;
        else if(presentCharacter == ' ')blanks++;
        else if(presentCharacter == '\t')tabs++;
    }
    printf("We encountered %ld newlines, %ld tabs, and %ld blanks\n",newLines,tabs,blanks);
    return 0;
}
/*
Hello World
This will get us a blank.
And this out segway to out sponsor.
We encountered 3 newlines, 1 tabs, and 13 blanks%
*/