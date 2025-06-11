// https://leetcode.com/problems/can-place-flowers

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int l = flowerbed.size();
        int count = 0;

        if(n>l){
            return false;
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
            // for(auto i:flowerbed){
            //     cout<<i<<" ";
            // }
        }
        
        return (count >= n);
    }
};