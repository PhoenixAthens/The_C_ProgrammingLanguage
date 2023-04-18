//
// Created by Anmol Khanna on 18/04/23.
//
//Runtime: 180ms beats 50%, Memory: 13.7MB beats 50%
void dfs(int*,int[],int[],int);
int closestMeetingNode(int* edges, int edgesSize, int node1, int node2){
    int dist1[edgesSize];
    int dist2[edgesSize];
    int visit1[edgesSize];
    int visit2[edgesSize];
    for(int i=0;i<edgesSize;i++){
        dist1[i]=-27;
        dist2[i]=-27;
        visit1[i]=0;
        visit2[i]=0;
    }
    dist1[node1]=0;
    dist2[node2]=0;
    dfs(edges,dist1,visit1,node1);
    dfs(edges,dist2,visit2,node2);
    int maxTillNow = 200000000;
    int currResult=-1;
    for(int i=0;i<edgesSize;i++){
        if(dist1[i]!=-27 && dist2[i]!=-27){
            int tempMax = (dist1[i]>dist2[i])?dist1[i]:dist2[i];
            if(tempMax<maxTillNow){
                maxTillNow=tempMax;
                currResult=i;
            }
        }
    }
    return currResult;
}
void dfs(int* edges, int dist[], int visitList[], int node){
    if(!visitList[node]){
        visitList[node]=1;
        int neighbor = edges[node];
        if(neighbor!=-1 && !visitList[neighbor]){
            dist[neighbor]=1+dist[node];
            dfs(edges,dist,visitList,neighbor);
        }
    }
}