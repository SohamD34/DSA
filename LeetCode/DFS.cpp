#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int> &v){
    cout<<"Connections - ";
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}

void printStack(stack<int> &S){
    cout<<"Stack - ";
    stack<int> temp = S;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}

vector<int> dfsOfGraph(vector<vector<int>>& adj) {
    
    int V = adj.size();
    
    stack<int> S;
    vector<int> dfs;
    int visited[V] = {0};
    
    visited[0] = 1;
    S.push(0);
    
    while(!S.empty()){
        
        int exploring = S.top();
        cout<<"Exploring "<<exploring<<endl;
        S.pop();
        
        dfs.push_back(exploring);
        visited[exploring] = 1;
        
        vector<int> connections = adj[exploring];
        print(connections);

        for(int i=connections.size()-1; i>=0; i--){
            if(visited[connections[i]] == 0){
                S.push(connections[i]);
                visited[connections[i]] = 1;
            }
        }
        printStack(S);

        cout<<endl;
    }
    
    return dfs;
}

// 0 1 5 8 3 7 6 9 2 4

// vector<int> isPrime = {0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1};
vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};

int main(){

    vector<vector<int>> adj = {
        {1,4,8},
        {0,5,6,9},
        {4},
        {7,8},
        {0,2},
        {1,8},
        {1,7,9},
        {3,6},
        {0,3,5},
        {1,6}
    };

    vector<int> isPrime;
    int index = 0;

    for(int i=0; i<=200; i++){
        if(index < primes.size()){
            if(i == primes[index]){
                isPrime.push_back(1);
                index++;
            }
            else{
                isPrime.push_back(0);
            }
        }
        else{
            isPrime.push_back(0);
        }
    }

    cout<<isPrime.size()<<endl;
    cout<<primes.size()<<endl;

    cout<<"{";
    for(auto i:isPrime){
        cout<<i<<", ";
    }   
    cout<<"}";
    cout<<endl;

    return 0;
}