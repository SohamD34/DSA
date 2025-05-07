#include <iostream>
using namespace std;
#define INFINITY 1000000
#define NILL -1
// 100/100

int Min_dist(int* dist_arr, int* visited, int n){
    
    int min = INFINITY;
    int min_index, v;
    for(v=1; v<=n; v++){
        if(visited[v]==0 && dist_arr[v]<min) { //...
            min = dist_arr[v];
            min_index = v;
        }
    }
    if(min!=INFINITY){        
        return min_index;
    }
    else{
        return INFINITY;
    }
}

void PrintPath(int* parent, int dest){

    if(parent[dest]==NILL){
        cout<<dest;
        return;
    }
    PrintPath(parent, parent[dest]);
    cout<<"->"<<dest;
}

void Dijkstra(int **graph, int n, int s, int d){
   
    int i, u, v, count;
    int dist_arr[n+1];
    int visited[n+1] = {0};
    int pathlength[n+1] = {0};
    int parent[n+1];
    
    parent[s] = NILL;
 
    for(i=1; i<=n; i++){
        dist_arr[i] = INFINITY;
    }

    dist_arr[s] = 0;
    for(count=0; count<n-1; count++) {
        u = Min_dist(dist_arr,visited,n);

        if(u==INFINITY){
            break;
        }
        else {
            visited[u] = 1;
            for(v=1; v<=n; v++){                
                if(!visited[v] && graph[u][v] && (dist_arr[u]+graph[u][v]<dist_arr[v])){
                    parent[v] = u;
                    dist_arr[v] = dist_arr[u] + graph[u][v];
                }
            }
        }
    }

}

int main(){

    int n,m;
    cin>>n>>m;

    int**ptr_arr;
    ptr_arr = new int*[n+1];

    for(int i=0; i<=n; i++){
        int*arr_ptr;
        arr_ptr = new int[n+1];
        ptr_arr[i] = arr_ptr;
    }
   
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            ptr_arr[i][j]=0;
            ptr_arr[j][i]=0;
        }
    }
 
    for(int i=0;i<m;i++){
        int x,y,wt;
        cin>>x>>y>>wt;
        ptr_arr[y][x] = wt;
        ptr_arr[x][y] = wt;
    }

    Dijkstra(ptr_arr,n,1,n);

    return 0;
}