class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = 150;
        int max_gain = 0;
        for (int i = 0; i < prices.size(); i++){
            max_gain = max( prices[i] - min_price, max_gain);
            min_price = min(min_price, prices[i]);        
        }

        return max_gain;
    }
};
