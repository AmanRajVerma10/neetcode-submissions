class Solution {
    /**
     * @param {number[]} height
     * @return {number}
     */
    trap(height) {
        let i = 0;
        let j = height.length - 1;
        let maxLeft = height[i];
        let maxRight = height[j];
        let ans = 0;
        while (i < j) {
            if (maxLeft <= maxRight) {
                i++;
                maxLeft = Math.max(height[i], maxLeft);
                ans += maxLeft - height[i];
            }
            else if (maxRight < maxLeft) {
                j--
                maxRight = Math.max(height[j], maxRight);
                ans += maxRight - height[j];

            }
        }
        return ans;
    }
}
