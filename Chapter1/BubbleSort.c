//
// Created by Anmol Khanna on 06/04/23.
//
#include <stdio.h>
void bubbleSort(int[],int);
void swap(int[],int,int);
int main(){
    //int arr[]={5, 3, 8, 6, 1, 9, 2, 7, 4};
    //int arr[]={5, 4, 3, 2, 1};
    //int arr[]={3, 1, 4, 5, 2};
    int arr[]={84, 24, 47, 33, 81, 17, 51, 36, 32, 99, 20, 29, 60, 77, 68, 97, 65, 55, 76, 50,
               38, 96, 44, 80, 22, 35, 25, 87, 40, 69, 95, 49, 67, 62, 71, 98, 59, 93,
               56, 61, 91, 70, 75, 85, 58, 79, 73, 45, 46 ,92 ,89 ,90 ,86 ,88 ,82 ,83,
               78 ,74 ,72 ,66 ,64 ,63 ,57 ,54 ,53 ,52 ,48 ,43 ,42 ,41 ,39 ,37 ,34 ,31 ,
               30 ,28 ,27 ,26 ,23 ,21 ,19 ,18 ,16 ,15 ,14 ,13 ,12 ,11 ,10 ,9 ,8 ,
               7 ,6 ,5 ,4 ,3};
    bubbleSort(arr,96);
    for(int i=0;i<96;i++){
        printf("%d ",arr[i]);
    }
}
void bubbleSort(int arr[], int size){
    if(size==0)return;
    int n=size;
    for(int i=0;i<size;i++){
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