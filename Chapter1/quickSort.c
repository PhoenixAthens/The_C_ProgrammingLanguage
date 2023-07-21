#include <stdio.h>
int partition(int[],int,int);
void qSort(int[],int,int);
void quickSort(int arr[], int lengthOfArray){
    qSort(arr,0,lengthOfArray-1);
}
void qSort(int arr[], int left, int right){
    if(left>=right)return;
    int part = partition(arr,left,right);
    qSort(arr,left,part-1);
    qSort(arr,part+1,right);
}
int partition(int arr[], int left, int right){
    int pivot = arr[left];
    int i = left+1;
    int j = right;
    while(1){
        while(i<=j && pivot>=arr[i])i++;
        while(i<=j && pivot<=arr[j])j--;
        if(i<=j){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }else{
            break;
        }
    }
    arr[left]=arr[j];
    arr[j]=pivot;
    return j;
}
int main(){
    //[3, 6, 9, 11, 12, 15, 18, 21, 23, 24, 27, 30, 33, 34, 45, 56, 67, 78, 89, 90]
    int arr[20] = {45, 12, 67, 89, 34, 23, 90, 11, 56, 78, 3, 6, 9, 15, 18, 21, 24, 27, 30, 33};
    quickSort(arr,20);
    for(int i=0;i<20;i++)printf("%d, ",arr[i]);
    return 0;
}