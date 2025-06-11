#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> ans;

    for(int i=0; i<numRows; i++){

        if(i==0){
            ans.push_back({1});
        }
        else if(i==1){
            ans.push_back({1,1});
        }
        else{
            vector<int> dummy;
            dummy.push_back(1);

            for(int j=1; j<ans[i-1].size(); j++){
                dummy.push_back(ans[i-1][j-1] + ans[i-1][j]);
            }
            dummy.push_back(1);
            ans.push_back(dummy);
        }
    }

    return ans;
}

int main(){
    int numRows;
    cin>>numRows;
    vector<vector<int>> ans = generate(numRows);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}