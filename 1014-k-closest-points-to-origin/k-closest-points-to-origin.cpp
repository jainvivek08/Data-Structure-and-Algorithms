class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<double,vector<int>>> v; // phirse karna 
        int n=points.size();
        for(int i=0;i<n;i++){
            int x=points[i][0];
            int y=points[i][1];
            double distance = sqrt(x*x + y*y);
            v.push_back({distance,points[i]});
        }
        sort(v.begin(),v.end());
        vector<vector<int>>ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};