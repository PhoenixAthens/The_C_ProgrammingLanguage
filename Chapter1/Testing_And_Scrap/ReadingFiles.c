#include <stdio.h>
int main() {
    int presentCharacter = 0;
    int newLine;
    int spaces;
    int tabs;
    int character;
    newLine = spaces = tabs = character = 0;
    FILE *fp;
    fp = fopen("/Users/anmolkhanna/CLionProjects/The_C_ProgrammingLanguage/Chapter1/KidWithGreatestNumberOfCandies.c",
               "r");
    if(fp == NULL){
        perror("FILE NOT FOUND!\n");
        return -1;
    }
    while ((presentCharacter = getc(fp)) != EOF) {
        if (presentCharacter == '\n')newLine++;
        else if (presentCharacter == '\t')tabs++;
        else if (presentCharacter == ' ')spaces++;
        else character++;
    }
    printf("WE HAVE:\n"
           "\t Character = %d\n"
           "\t New lines = %d\n"
           "\t Spaces = %d\n"
           "\t Tabs = %d\n", character, newLine, spaces, tabs);
    return 0;
}