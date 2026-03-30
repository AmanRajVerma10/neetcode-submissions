class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)==s.end()){
                int length=1;
                while(s.find(nums[i]+length)!=s.end()){
                    length++;
                }
                ans=max(length,ans);
            }
        }
        return ans;
    }
};
