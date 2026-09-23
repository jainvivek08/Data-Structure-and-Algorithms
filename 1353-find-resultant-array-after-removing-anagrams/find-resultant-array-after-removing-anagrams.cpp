class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        ans.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            string temp=words[i];
            string s=temp;
            sort(s.begin(),s.end());
            string t=ans.back();
            sort(t.begin(),t.end());
            if(s!=t) ans.push_back(temp);
        }
        return ans;
    }
};