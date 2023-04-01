//
// Created by Anmol Khanna on 01/04/23.
//
#include <stdio.h>
#include <math.h>
//Using fmax()
//Runtime: 162ms beats 5.5%, Memory: 12.5MB beats 39.43%
//using ternary operator
//Runtime: 141ms beats 5.5%, Memory: 12.3MB beats 79.20%
//using Kadane's Algorithm
//Runtime: 114ms beats 75.46%, Memory: 12.3MB beats 79.29%
//some improvements to kadane
//Runtime: 104ms beats 99.4%, Memory: 12.2MB beats 98.87%
int maxSum(int*,int,int);
int main(){
    int nums[]={-2,1,-3,4,-1,2,1,-5,4};
    int r= maxSum(nums,0,8);
    printf("%d",r);
    return 0;
}
int maxSum(int* arr, int low, int high ){
    if(low == high) return arr[low];
    else{
        int mid=floor((low+high)/2);
        int subSum=0;
        int maxRight=-2000000000,maxLeft=-2000000000;
        for(int i=mid;i>=low;i--){
            subSum+=arr[i];
            maxLeft=(maxLeft>subSum)?maxLeft:subSum;
        }
        subSum=0;
        for(int i=mid+1;i<=high;i++){
            subSum+=arr[i];
            maxRight=(maxRight>subSum)?maxRight:subSum;
        }
        int left=maxSum(arr,low,mid);
        int right=maxSum(arr,mid+1,high);
        int resultLR=(left>right)?left:right;
        int sum = maxLeft + maxRight;
        return (resultLR>sum)?resultLR:sum;
    }
}
int KadaneAlgo(int* nums, int len){
    int max=nums[0];
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=nums[i];
        max = (max>sum)?max:sum;
        if(sum<0)sum=0;
    }
    return max;
}