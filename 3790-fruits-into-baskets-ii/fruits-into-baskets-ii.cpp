class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        set<int>used;
        int unplaced=0;
        for(int i=0;i<fruits.size();i++){
            bool placed=false;
            for(int j=0;j<baskets.size();j++){
                if(used.find(j)!=used.end()) continue;
                if(fruits[i]<=baskets[j]){
                    used.insert(j);
                    placed=true;
                    break;
                }
            }
            if(placed!=true) unplaced++;
        }
        return unplaced;
    }
};