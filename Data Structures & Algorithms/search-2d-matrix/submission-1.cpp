class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int left = 0;
        int right = m * n - 1;

        while (left <= right){
            int mid = (left + right) / 2;
            int m_prime = mid / n;
            int n_prime = mid % n;
            
            if (matrix[m_prime][n_prime] == target)
                return true;
            else if (matrix[m_prime][n_prime] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }

        return false;
    }
};
