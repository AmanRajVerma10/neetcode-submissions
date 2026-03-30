class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
         vector<int> ans(temps.size(),0);
        stack<int> s;
        for(int i=0;i<temps.size();i++){
            while(!s.empty() && temps[i]>temps[s.top()]){
                ans[s.top()]=i-s.top();
                s.pop();
            }
            s.push(i);
        }
        return ans;
    }
};
