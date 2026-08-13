class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int>(n));
        int minr=0,minc=0;
        int maxr = n-1,maxc = n-1;
        int count=1;
        int tne=n*n;
        while(minr<=maxr && minc<=maxc){
            for(int j=minc;j<=maxc;j++){
                v[minr][j]=count;
                count++;
            }
            minr++;
            for(int i=minr;i<=maxr;i++){
                v[i][maxc]=count;
                count++;
            }
            maxc--;
            for(int j=maxc;j>=minc;j--){
                v[maxr][j]=count;
                count++;
            }
            maxr--;
            for(int i=maxr;i>=minr;i--){
                v[i][minc]=count;
                count++;
            }
            minc++;
        }
        return v;
    }
};