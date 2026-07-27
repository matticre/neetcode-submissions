class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++){
            int max_element = 0;
            for (int j = i+1; j < arr.size(); j++){
                if (arr[j] > max_element)
                    max_element = arr[j];
            }
            arr[i] = max_element; 
        }

        arr[arr.size() - 1] = -1;

        return arr;
    }
};