/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {
    var ans = new Array(n);

    for(let i=0;i<n;i++)
    {
        if((i+1)%3==0 && (i+1)%5==0) {
            ans[i] = "FizzBuzz";
        }
        else if((i+1)%3==0) {
            ans[i] = "Fizz";
        }
        else if((i+1)%5==0) {
            ans[i] = "Buzz";
        }
        else {
            ans[i] = (i+1).toString();
        }
    }
    return ans;
};
