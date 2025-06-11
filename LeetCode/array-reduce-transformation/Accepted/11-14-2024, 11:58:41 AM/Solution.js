// https://leetcode.com/problems/array-reduce-transformation

/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    
    let accum = init;
    
    nums.forEach((num,i) => {
        accum = fn(accum, nums[i])
    });

    return accum;
};