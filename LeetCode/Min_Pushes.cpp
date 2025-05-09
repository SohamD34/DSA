#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<char> get_chars_in_descending_freq(string word){

    unordered_map<char, int> N;
    for(auto i:word){
        if(N[i]){
            N[i] ++;
        }
        else{
            N[i] = 1;
        }
    }
    
    unordered_map<int, vector<char>> M;
    for(auto i:N){
        M[i.second].push_back(i.first);
    }

    vector<int> values;
    for(auto i:M){
        values.push_back(i.first);
    }
    sort(values.begin(), values.end(), greater<>());

    vector<char> v;
    for(auto val:values){
        for(auto i:M[val]){
            v.push_back(i);
        }
    }
    return v;

}

int main(){

    // string word = "xyzxyzxyzxyz"; // 12
    // string word = "abcde"; // 5
    string word = "aabbccddeeffgghhiiiiii"; // 24

    vector<char> desc = get_chars_in_descending_freq(word);
    
    int count = 0;

    for(auto c:word){
        int pos = find(desc.begin(), desc.end(), c) - desc.begin();
        count += ((pos/7) + 1);
    }

    cout<<count<<endl;

    return 0;
}