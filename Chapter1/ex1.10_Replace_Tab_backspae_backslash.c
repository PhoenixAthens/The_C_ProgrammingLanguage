#include <stdio.h>
int main() {
    // tab, \t = 9, \b = 8, and \ = 92
    int c;
    while ((c = getchar()) != EOF) {
        if(c==9)printf("%ct",92);
        else if(c==8)printf("%cb",92);
        else if(c==92)printf("%c%c",92,92);
        else printf("%c",c);
    }
    return 0;
}