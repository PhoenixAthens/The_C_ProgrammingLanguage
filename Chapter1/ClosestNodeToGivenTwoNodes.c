//
// Created by Anmol Khanna on 04/04/23.
//
#include <stdio.h>
//Runtime: 169ms beats 75%, Memory: 13.6MB beats 100%
void bfs(int* edges, int* dist, int startNode,int n){
    int* queue = {&startNode};
    int boolArray[n];
    for(int i=0;i<n;i++)boolArray[i]=0;
    dist[startNode]=0;
    while(queue[0]!=-1){
        if(boolArray[queue[0]])continue;
        boolArray[startNode]=1;
        int neighbor = edges[queue[0]];
        if(neighbor == -1 || boolArray[neighbor]){
            break;
        }else{
            dist[neighbor]=dist[queue[0]]+1;
            queue[0]=neighbor;
        }
    }
}
int closestMeetingNode(int* edges, int edgesSize, int node1, int node2){
    int dist1[edgesSize];
    int dist2[edgesSize];
    for(int i=0;i<edgesSize;i++)dist1[i]=dist2[i]=-27;
    bfs(edges,dist1,node1,edgesSize);
    bfs(edges,dist2,node2,edgesSize);
    int closestNode = -1;
    int closestDistTillNow=2000000;
    for(int i=0;i<edgesSize;i++){
        if(dist1[i]==-27 || dist2[i]==-27)continue;
        int tempMax = (dist1[i] > dist2[i])?dist1[i]:dist2[i];
        if(tempMax<closestDistTillNow){
            closestNode = i;
            closestDistTillNow=tempMax;
        }
    }
    return closestNode;
}
int main(){
    int edges[]={ 2, 2, 3, -1};
    int result= closestMeetingNode(edges,4,0,1);
    printf("%d",result);
}