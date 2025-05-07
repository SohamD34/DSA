#include <bits/stdc++.h>
#include <string>
using namespace std;

int carry = 1;

char solve(char s){
    
    char sum = char((int)s + carry);

    if(sum >'9'){
        carry = 1;
        sum = char((int)s + carry - 10);
    }
    else{
        carry = 0;
    }

    return sum;
}

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    string s;
	    cin>>s;

        carry = 1;

        int n = s.length();

        string out = "";
        
        for(int i=n-1; i>=0; i--){
            char sum = solve(s[i]);
            out = sum + out;
        }

        if(carry == 1){
            out = "1" + out;
        }

        cout<<out<<endl;
	}
	return 0;
}
