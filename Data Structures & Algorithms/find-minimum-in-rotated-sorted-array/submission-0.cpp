class Solution {
public:
    int findMin(vector<int> &nums) {
        int i=0;
        int j=nums.size()-1;
        int res=nums[0];
        while(i<=j){
            if(nums[i]<nums[j]){
                return min(nums[i],res);
            }
            int mid=(i+j)/2;
            res=min(res,nums[mid]);
            if(nums[mid]>=nums[i]){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return res;
    }
};
