// https://leetcode.com/problems/counter-ii

/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    
    let curr_count = init;

    function increment(){
        curr_count += 1;
    }
    function decrement(){
        curr_count -= 1;
    }
    function reset(){
        init = curr_count;
    }

    return {increment, decrement, reset}
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */