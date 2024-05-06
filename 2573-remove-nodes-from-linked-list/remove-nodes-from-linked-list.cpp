class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        vector<int> v;
        while (head != nullptr) {
            v.push_back(head->val);
            head = head->next;
        }
        int n = v.size();
        vector<int> ans;
        ans.push_back(v[n - 1]);
        int max = v[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if (v[i] >= max) {
                ans.push_back(v[i]);
                max = v[i];
            }
        }
        reverse(ans.begin(),ans.end());
        ListNode* newhead=nullptr;
        ListNode* currhead=nullptr;
        for(auto it:ans)
        {
            if(newhead==nullptr)
            {
                newhead=new ListNode(it);
                currhead=newhead;
            }
            else{
                currhead->next=new ListNode(it);
                currhead=currhead->next;
            }
        }
        return newhead;
    }
};
