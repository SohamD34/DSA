#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        
    sort(products.begin(), products.end());

    // mobile moneypot monitor mouse mousepad

    vector<vector<string>> outputs;

    for(int i=0; i<searchWord.length(); i++){

        char letter_to_check = searchWord[i];

        vector<string> similar;
        
        if(i==0){
            for(auto s:products){
                if(s[i]==letter_to_check){
                    similar.push_back(s);
                }
            }
        }
        else{
            for(auto s:outputs[i-1]){
                if(s[i]==letter_to_check){
                    similar.push_back(s);
                }
            }
        }

        outputs.push_back(similar);
    }

    vector<vector<string>> ans;

    for(auto i:outputs){
        vector<string> v;
        for(auto j:i){
            v.push_back(j);

            if(v.size()==3){
                break;
            }
        }
        ans.push_back(v);
    }
    return ans;
}


int main(){

    vector<string> products = {"mobile","mouse","moneypot","monitor","mousepad"};
    string searchWord = "mouse";

    vector<vector<string>> ans = suggestedProducts(products, searchWord);

    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}