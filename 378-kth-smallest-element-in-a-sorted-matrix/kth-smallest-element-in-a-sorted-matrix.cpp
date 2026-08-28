class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int lo = matrix[0][0];
        int hi = matrix[n - 1][n - 1];
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            int count = 0;
            int i = 0;
            int j = n - 1;
            while (i < n && j >= 0) {
                if (matrix[i][j] <= mid) {
                    count += j + 1;
                    i++;
                } else {
                    j--;
                }
            }
            if (count < k)
                lo = mid + 1;
            else
                hi = mid;
        }
        return lo;
    }
};