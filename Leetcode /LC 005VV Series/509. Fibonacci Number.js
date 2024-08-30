/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n) {
    var fibArray = new Array(n+1);

    fibArray[0] = 0;
    fibArray[1] = 1;

    for(let i=2;i<=n;i++) {
        fibArray[i] = fibArray[i-1] + fibArray[i-2];
    }

    return fibArray[n];
};
