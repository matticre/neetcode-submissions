class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_value = *max_element(piles.begin(), piles.end());
        int left = 1;
        int right = max_value;
        int mid = 0;

        while(left <= right){
             mid = (left + right) / 2;
            
            int hours = 0;
            for (auto pile : piles){
                hours += (pile + mid  - 1) / mid;
            }

            if (hours <= h){
                right = mid - 1;
            } else {
                left = mid + 1;
            } 
        }

        return left;

    }
};
