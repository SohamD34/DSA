#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}



vector<int> remove(vector<int> &v, int n, int start){
    if(n==1){
        return v;
    }

    vector<int> ans;
    for(int i=0; i<n; i++){
        if(i%2 != start){
            ans.push_back(v[i]);
        }
    }
    print(ans);
    return remove(ans, n/2, start^1);
}

int lastRemaining(int n) {

    vector<int> v;
    for(int i=0; i<n; i++){
        v.push_back(i+1);
    }
    vector<int> ans = remove(v, n, 0);
    return ans[0];
}


int main(){
    int n = 1;
    cout << lastRemaining(n) << endl; // Output: 6
    return 0;
}