#include <stdio.h>

int a[7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0}, 
        {0,0,0,0,1,0,0}};

void dfs(int start, int visited[], int n){

    printf("%d ",start);

    visited[start] = 1;
 
    for(int i=0;i<n;i++) {
        if(a[start][i]==1 && (visited[i])==0){
            dfs(i,visited,n);
        }
    }
}

int main(){

    int n = 7;
    int visited[7] = {0,0,0,0,0,0,0};

    dfs(0, visited, n);
 
    return 0;
}