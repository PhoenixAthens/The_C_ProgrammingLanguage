#include <stdio.h>
int main(){
    long lines,characterCount,c;
    lines=characterCount=0;
    while((c = getchar())!=EOF){
        if(c!='\n')lines++;
        else characterCount++;
    }
    printf("Characters counter: %ld, Lines Counted: %ld",characterCount,lines);
    return 0;
}
/*
Hello World! \n Ich heise Phoenix.\n Ich komme aus Deutschland.\n Ich abeite in einen Firms und Ich freue mich!.
So you coming or not.
Characters counter: 2, Lines Counted: 135%
So '\n' were not seen as escape sequences, pressing enter, however, does equal '\n'
 * */