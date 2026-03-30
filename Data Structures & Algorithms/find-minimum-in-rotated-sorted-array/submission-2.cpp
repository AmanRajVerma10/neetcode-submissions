class Solution {
public:
    int findMin(vector<int> &nums) {
        int i=0;
        int j=nums.size()-1;
        if (nums[i] <= nums[j]) {
            return nums[i];
        }
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]>nums[mid+1] && mid < nums.size() - 1){
                return nums[mid+1];
            }
            if(nums[i]>nums[mid]){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
    }
};
