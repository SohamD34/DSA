#include <iostream>
#include <vector>
using namespace std;


/*
You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.
Given an integer array flowerbed containing 0s and 1s, where 0 means empty and 1 means not empty, and an integer n, 
Return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

Example 1:
Input: flowerbed = [1,0,0,0,1], n = 1
Output: true

Example 2:
Input: flowerbed = [1,0,0,0,1], n = 2
Output: false

*/


bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
    int l = flowerbed.size();
    int count = 0;

    if(n>l){
        return false;
    }

    if(n==0){
        return true;
    }

    if(l==1){
        if(flowerbed[0]==1){
            return false;
        }
        else{
            if(n==1){
                return true;
            }
            return false;
        }
    }

    for (int i=0; i<l; i++){

        if(i==0){
            if(flowerbed[i]==0 && flowerbed[i+1]==0){
                count +=1;
                flowerbed[i] = 1;
            }
        }
        else if(i == l-1){
            if(flowerbed[i]==0 && flowerbed[i-1]==0){
                count +=1;
                flowerbed[i] = 1;
            }
        }
        else{
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                count += 1;
                flowerbed[i] = 1;
            }
        }
    }
    
    return (count >= n);
}