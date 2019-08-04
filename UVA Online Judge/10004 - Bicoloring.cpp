//10004 - Bicoloring

#include <iostream>
#include <cstring>
#include <vector>
#include<stdio.h>
using namespace std;
bool bi;

void dfs(int start, int paint, int * vcolor, vector<int> * adj){
     if(vcolor[start] == -1){
        vcolor[start]=paint;
        for(int i=0;i<adj[start].size();i++){
            if(paint==1)dfs(adj[start][i],2,vcolor,adj);
            else dfs(adj[start][i],1,vcolor,adj);
            }
    }else{
           if((paint != vcolor[start]))bi=false;
    }
 }
int main(){
    int v,edges,a,b;
    scanf("%d",&v);
    while(v!=0){
         scanf("%d",&edges);
         vector <int> adj[v];
         int color[v];
         memset(color,-1,sizeof color);
         for(int i=0;i<edges;i++){
                 scanf("%d %d",&a,&b);
                 adj[a].push_back(b);
                 adj[b].push_back(a);
         }
         bi=true;
         dfs(0,1,color,adj);
         if(bi)printf("BICOLORABLE.\n");
         else printf("NOT BICOLORABLE.\n");
     scanf("%d",&v);
    }

 return 0;
}
