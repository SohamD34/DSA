// https://leetcode.com/problems/filter-elements-from-array

/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    
    let ans = []

    arr.forEach((num, i) =>{
        if(fn(arr[i],i)){
            ans.push(arr[i])
        }
    })

    return ans;
};