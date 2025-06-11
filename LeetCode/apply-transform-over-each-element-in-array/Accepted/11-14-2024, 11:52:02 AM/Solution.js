// https://leetcode.com/problems/apply-transform-over-each-element-in-array

/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    
    let ans = [];
    
    arr.forEach((item, i) => {
        ans.push(fn(arr[i], i));
    })

    return ans;
};