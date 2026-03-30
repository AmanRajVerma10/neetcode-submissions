class Solution {
    /**
     * @param {string[]} tokens
     * @return {number}
     */
    evalRPN(tokens) {
        let stack = [];
        for (let s of tokens) {
            if (s == "+" || s == "/" || s == "-" || s == "*") {
                let num2 = stack.pop();
                let num1 = stack.pop();
                if (s == "+") stack.push(num1 + num2);
                else if (s == "-") stack.push(num1 - num2);
                else if (s == "/") stack.push(Math.trunc(num1 / num2));
                else { stack.push(num1 * num2) };
            }
            else {
                stack.push(+s);
            }
        }
        return stack.pop();
    }
}
