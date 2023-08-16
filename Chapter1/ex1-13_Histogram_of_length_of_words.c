#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("/Users/anmolkhanna/CLionProjects/The_C_ProgrammingLanguage/Chapter1/Testing_And_Scrap/sample.txt","r");
    int charCounter[52];
    for(int i=0;i<52;i++)charCounter[i]=0;
    int pChar;
    while((pChar = getc(fp))!=EOF){
        if(pChar>=97 && pChar<=122){
            charCounter[pChar-71]++; //-97+26 = -71
        }else if(pChar>=65 && pChar<=90){
            charCounter[pChar-65]++;
        }
    }
    for(int i=0;i<52;i++)printf("%d, ",charCounter[i]);
    printf("\n");
    for(int i=0;i<26;i++){
        printf("%c -> ",65+i);
        int j=0;
        while(j<charCounter[i]){
            printf("#");
            j++;
        }
        printf("\n");
    }
    for(int i=26;i<52;i++){
        printf("%c -> ",71+i);
        int j=0;
        while(j<charCounter[i]){
            printf("#");
            j++;
        }
        printf("\n");
    }

    //Vertical histogram
    int max= charCounter[0];
    for(int i=0;i<52;i++)if(charCounter[i]>max)max=charCounter[i];

    for(int i=max;i>0;i--){
        for(int j=0;j<52;j++){
            if(charCounter[j]==i){
                charCounter[j]--;
                printf(" %c ",'#');
            }else{
                printf(" %c ",' ');
            }
        }
        printf("\n");
    }
    for(int i=0;i<26;i++)printf(" %c ",65+i);
    for(int i=26;i<52;i++)printf(" %c ",71+i);
    return 0;
}
