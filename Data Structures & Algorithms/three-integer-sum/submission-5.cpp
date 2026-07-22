class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       std::sort(nums.begin(), nums.end());
       vector<vector<int>> res;

        for (int k = 0; k < nums.size() - 1; k++){
            int i = k+1;
            int j = nums.size() - 1;
            if (k > 0 && nums[k] == nums[k - 1]) continue;

            while (i < j){

                auto sum = nums[i] + nums[j] +  nums[k];

                if (sum == 0){
                    res.push_back({nums[i], nums[j], nums[k]});
                    j--;
                    i++;
                    while (i < j && nums[i] == nums[i - 1]) i++;
                    while (i < j && nums[j] == nums[j + 1]) j--;
                }
                else if (sum > 0)
                    j--;
                else
                    i++;    
            }
        }

        return res;
    
    }
};
