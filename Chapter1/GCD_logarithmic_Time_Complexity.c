//
// Created by Anmol Khanna on 23/03/23.
//
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int GCD_Calculator(int num1, int num2){
    if(num2==0)return num1;
    else{
        int r=num1%num2;
        return GCD_Calculator(num2,r);
    }
}
int abs(int num){
    int mask=num>>31;
    int final=(num+mask)^mask;
    return final;
}
int main(){
    int num1, num2;
    printf("Enter the first numbers: ");
    scanf("%d",&num1);
    printf("Enter the second numbers: ");
    scanf("%d",&num2);
    int result;

    if(num1==num2)result=num1;
    else if(num1<num2)
        result= GCD_Calculator(abs(num2),abs(num1));
    else
        result=GCD_Calculator(abs(num1),abs(num2));
    printf("GCD of %d, %d is %d",num1,num2,result);
}
//NOTE about calculating GCD:
/*The GCD (Greatest Common Divisor) of two numbers is the
 * largest positive integer that divides both numbers without
 * a remainder. In other words, it’s the largest number that both
 * numbers can be divided by evenly.
 * In the case of 14 and -21, we can list their divisors to find their GCD:
 * The divisors of 14 are: 1, 2, 7, and 14.
 * The divisors of -21 are: -1, -3, -7, and -21.
 * The largest positive integer that divides both numbers without a remainder is 7.
 * Therefore, the GCD of 14 and -21 is 7.
 * It’s important to note that when calculating the GCD of two numbers,
 * we only consider their absolute values (ignoring their signs). So in this case,
 * we calculate the GCD of 14 and 21 (ignoring the negative sign), which is also 7.
 * */