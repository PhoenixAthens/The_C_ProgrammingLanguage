// ex 1.6 = Verify that the expression getchar ( ) |= EOF is 0 or 1.
#include <stdio.h>
int printValueOfEOF();
int main(){
    int result = getchar() != EOF;
    printf("The value of getchar()!=EOF is %d\n", result);

    //printing value of EOF
    printf("The value of EOF is %d\n",printValueOfEOF()); //-1 (if we press ctrl+D)
    return 0;
}
//If we click anything other than ctrl+D we get 1
//otherwise we get 0

//ex 1.7 = Write a program to print the value of EOF.
int printValueOfEOF(){
    int c;
    while((c=getchar())!=EOF){
    }
    return c;
}
//pressing ctrl+Z terminates the process, giving us nothing!!
