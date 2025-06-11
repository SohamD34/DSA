// https://leetcode.com/problems/return-length-of-arguments-passed

/**
 * @param {...(null|boolean|number|string|Array|Object)} args
 * @return {number}
 */
var argumentsLength = function(...args) {
    
    let count = 0;

    args.forEach(x =>{
        count = count + 1;
    })

    return count;
};

/**
 * argumentsLength(1, 2, 3); // 3
 */