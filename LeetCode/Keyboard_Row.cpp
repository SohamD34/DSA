#include <bits/stdc++.h>
#include <cctype>
using namespace std;

void print(vector<string> v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}


vector<string> findWords(vector<string>& words) {
    
    string row1 = "qwertyuiop";
    string row2 = "asdfghjkl";
    string row3 = "zxcvbnm";

    int maps[26];
    for(auto i:row1){
        maps[i-'a'] = 1;
    }
    for(auto i:row2){
        maps[i-'a'] = 2;
    }
    for(auto i:row3){
        maps[i-'a'] = 3;
    }

    vector<string> ans;

    for(auto word:words){
        
        int target = maps[tolower(word[0]) - 'a'];
        bool valid = true;
        
        for(auto chr:word){
            if(maps[tolower(chr) - 'a'] != target){
                valid = false;
                break;
            }
        }

        if(valid){
            ans.push_back(word);
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<string> words = {"Hello","Alaska","Dad","Peace"};
    print(findWords(words));

    words = {"omk"};
    print(findWords(words));

    words = {"adsdf","sfd"};
    print(findWords(words));

    return 0;   
}