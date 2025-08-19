#include <bits/stdc++.h>
using namespace std;

int distributeCandies(vector<int>& candyType) {

    // int n = candyType.size();
    
    // for(auto i:candyType){
    //     M[i]++;
    // }

    // // max eat = n/2
    // int uniques = M.size();
    // int capacity = n/2;

    // return min(capacity, uniques);

    bitset<200005> b;
    for(auto c : candyType){
        b.set(c+1e5);
    }

    return min(b.count(), candyType.size()/2);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> candy = {1,1,2,2,3,3};
    cout << distributeCandies(candy) << endl;

    candy = {1,1,2,3};
    cout << distributeCandies(candy) << endl;

    candy = {6,6,6,6};
    cout << distributeCandies(candy) << endl;

   return 0;
}

