/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans;
        ListNode*temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(len<3) return {-1,-1};
        vector<int>v;
        ListNode*p=head;
        ListNode*q=head->next;
        int x=2;
        while(q->next!=NULL){
            ListNode*r=q->next;
            if(q->val > p->val && q->val > r->val) v.push_back(x);
            if(q->val < p->val && q->val < r->val) v.push_back(x);
            p=p->next;
            q=q->next;
            x++;
        }
        int n=v.size();
        if(n<2) return {-1,-1};
        int mini=INT_MAX;
        for(int i=1;i<n;i++){
            mini=min(mini,v[i]-v[i-1]);
        }
        int maxi=v[n-1]-v[0];
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
    }
};