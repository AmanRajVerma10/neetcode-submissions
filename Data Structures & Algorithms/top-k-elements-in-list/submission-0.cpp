class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    map<int, int> m;
    for (auto it : nums) {
        m[it]++;
    }
    vector<pair<int, int>> pairs;
    for (auto it : m) {
        pairs.push_back(it);
    }
    sort(pairs.begin(), pairs.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });
    vector<int> ans;
    for (int i = 0; i < k; ++i) {
        ans.push_back(pairs[i].first);
    }
    return ans;
    }
};
