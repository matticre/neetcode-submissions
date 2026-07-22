class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        map<char, int> freq_map;
        int count = 0, max_count = 0;

        while (right < s.length()){
            if (freq_map[s[right]] > 0){
                while (freq_map[s[right]] && left < right){
                    freq_map[s[left]] = 0;
                    left++;
                    count--;
                }
            }

            freq_map[s[right]]++;
            right++;
            count++;
            max_count = max(count, max_count);
        }
        
        return max_count;
    }
};
