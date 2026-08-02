class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>colmax(n,INT_MIN);
        for(int j=0;j<n;j++){
            for(int i=0;i<m;i++){
                if(colmax[j]<matrix[i][j]) colmax[j]=matrix[i][j];
            }
        }
        vector<vector<int>>answer=matrix;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(answer[i][j]==-1) answer[i][j]=colmax[j];
            }
        }
        return answer;
    }
};