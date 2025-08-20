#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}


vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> weakest;

    int rows = mat.size();
    int cols = mat[0].size();
    int s = 0;

    for(int r=0; r<rows; r++){
        s = 0;
        for(int c=0; c<cols; c++){
            s += mat[r][c];
        }
        pq.push({s, r});
    }

    for(int i=0; i<k; i++){
        weakest.push_back(pq.top().second);
        pq.pop();
    }

    return weakest;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<vector<int>> mat = {
        {1,1,0,0,0},
        {1,1,1,1,0},
        {1,0,0,0,0},
        {1,1,0,0,0},
        {1,1,1,1,1}
    };
    int k = 3;
    vector<int> ans = kWeakestRows(mat, k);
    print(ans);

    return 0;
}