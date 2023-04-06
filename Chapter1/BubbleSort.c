//
// Created by Anmol Khanna on 06/04/23.
//
#include <stdio.h>
void bubbleSort(int[],int);
void swap(int[],int,int);
int main(){
    int arr[]={5, 3, 8, 6, 1, 9, 2, 7, 4};
    bubbleSort(arr,9);
    for(int i=0;i<9;i++){
        printf("%d ",arr[i]);
    }
}
void bubbleSort(int arr[], int size){
    int n=size;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr,j,j+1);
            }
        }
        n--;
    }
}
void swap(int arr[], int index1, int index2){
    int temp=arr[index1];
    arr[index1]=arr[index2];
    arr[index2]=temp;
}