#include <bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}


vector<int> getRow(int rowIndex) {
    
    vector<int> prev;
    vector<int> curr;

    for(int i=0; i<rowIndex+1; i++){

        if(i==0){
            prev = {1};
        }
        else if(i==1){
            prev = {1,1};
        }
        else{
            curr = {};
            curr.push_back(1);
            for(int j=1; j<prev.size(); j++){
                curr.push_back(prev[j-1] + prev[j]);
            }
            curr.push_back(1);
            prev = curr;
        }
    }

    return prev;
}


int main(){
    int rowIndex = 3;
    vector<int> result = getRow(rowIndex);
    print(result);

    rowIndex = 0;
    result = getRow(rowIndex);
    print(result);

    rowIndex = 1;
    result = getRow(rowIndex);
    print(result);

    return 0;
}