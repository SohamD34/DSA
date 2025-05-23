#include <iostream>
#include <vector>
using namespace std;

/* 1482. Minimum Number of Days to Make m Bouquets - Medium

You are given an integer array bloomDay, an integer m and an integer k.
You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.
The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and then can be used in exactly one bouquet.
Return the minimum number of days you need to wait to be able to make m bouquets from the garden. 
If it is impossible to make m bouquets return -1.

Example 1:

Input: bloomDay = [1,10,3,10,2], m = 3, k = 1
Output: 3
Explanation: Let us see what happened in the first three days. x means flower bloomed and _ means flower did not bloom in the garden.
We need 3 bouquets each should contain 1 flower.
After day 1: [x, _, _, _, _]   // we can only make one bouquet.
After day 2: [x, _, _, _, x]   // we can only make two bouquets.
After day 3: [x, _, x, _, x]   // we can make 3 bouquets. The answer is 3.

*/

int minDays(vector<int>& bloomDay, int m, int k) {

    int n = bloomDay.size();    

    if(n < m*k){
        return -1;
    }

    int left = 0; 
    int right = 0;


}


int main(){

    cout<<-1/10<<endl;
    return 0;
}