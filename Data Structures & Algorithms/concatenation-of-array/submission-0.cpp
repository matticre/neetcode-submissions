class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.begin(), nums.end());
        ans.reserve(2*nums.size());

        for (auto num : nums)
            ans.push_back(num);
            
        return ans;
    }
};