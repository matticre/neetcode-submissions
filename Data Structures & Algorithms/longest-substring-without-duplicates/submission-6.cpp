class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int count = 0, max_count = 0;
        unordered_map<char, int> freq;
        for (int i = 0; i < s.length(); i++){
            if (freq[s[i]]){
                while (freq[s[i]] && left < i){
                    freq[s[left]]--;
                    left++;
                    count--;
                }
            } 

            freq[s[i]]++;
            count++;
            max_count = max(count, max_count);
        }

        return max_count;
    }
};
