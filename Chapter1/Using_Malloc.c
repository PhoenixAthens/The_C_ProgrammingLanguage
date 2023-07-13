//
// Created by Anmol Khanna on 17/04/23.
//
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, sum, *ptr = 0;
    printf("%s","Number of elements in array: ");
    scanf("%d",&n);
    ptr = malloc(n*sizeof(int));
    if(ptr==NULL){
        printf("Error allocating memory!");
        exit(0);
    }

    sum=0;
    printf("%s","Enter the values for array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("Printing the array!");
    for(int i=0;i<n;i++)printf("%d ",*(ptr+i));
    printf("\nSum of array is: %d",sum);
    free(ptr);
    return 0;
}