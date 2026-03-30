class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
         vector<int> ans(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            int count=0;
            int b=1;
            for(int j=i+1;j<temperatures.size();j++){
                count++;
                if(temperatures[j]>temperatures[i]){
                    b=0;
                    break;
                }
            }
            if(b==0){
                ans[i]=count;
            }
        }
        return ans;
    }
};
