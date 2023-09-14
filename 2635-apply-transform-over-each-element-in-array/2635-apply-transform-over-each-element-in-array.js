/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const newarr=[];
     let idx=0;
     for(let elem of arr)
         {
             newarr[idx]=fn(elem , idx);
             idx++;
         }
     return newarr;
};