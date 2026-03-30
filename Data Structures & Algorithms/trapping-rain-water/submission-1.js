class Solution {
    /**
     * @param {number[]} height
     * @return {number}
     */
    trap(height) {
        let leftMaxArr=[0];
        let rightMaxArr=[];
        let leftMax=0;
        for(let i=0;i<height.length;i++){
            leftMaxArr[i]=leftMax;
            leftMax= Math.max(leftMax,height[i]);
        }
        let rightMax=0;
        for(let i=height.length-1;i>=0;i--){
            rightMaxArr[i]=rightMax;
            rightMax= Math.max(rightMax,height[i]);
        }
        let ans=0;
    
        for(let i=0;i<height.length;i++){
            if(height[i]<leftMaxArr[i] &&
            height[i]<rightMaxArr[i]){
                ans+=Math.min(leftMaxArr[i],rightMaxArr[i])-height[i];
            }
        }
        return ans;
    }
}
