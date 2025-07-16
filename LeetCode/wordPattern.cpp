#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void print(vector<string> &v){
    for(int i=0;i<v.size();i++){
        cout << v[i] <<  '-'<<endl;
    }
    cout << endl;
}


bool wordPattern(string pattern, string s){

    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;
    istringstream ss(s);
    string word;
    int i = 0;
    
    while (ss >> word) {
        if (i >= pattern.size()){
            return false; 
        }
        char c = pattern[i];
        if (charToWord.count(c) && charToWord[c] != word) {
            return false; 
        }
        if (wordToChar.count(word) && wordToChar[word] != c) {
            return false; 
        }

        charToWord[c] = word;
        wordToChar[word] = c;
        i++;
    }
    
    return i == pattern.size(); 
}


int main(){

    string pattern = "abba";
    string s = "dog cat cat dog";
    cout << wordPattern(pattern, s) << endl;

    pattern = "abba";
    s = "dog cat cat fish";
    cout << wordPattern(pattern, s) << endl;

    pattern = "aaaa";
    s = "dog cat cat dog";
    cout << wordPattern(pattern, s) << endl;


    return 0;
}