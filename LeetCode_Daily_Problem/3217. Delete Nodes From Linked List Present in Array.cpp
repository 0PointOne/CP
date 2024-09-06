class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> st;
        for(int i = 0; i < nums.size(); i++) st.insert(nums[i]);

        while(head != NULL && st.find(head->val) != st.end()){
            ListNode *d = head;
            head = head->next;
            delete d;
        }
        if(head == NULL) return head;

        ListNode *temp = head;
        while(temp->next != NULL){
            if(st.find(temp->next->val) != st.end()){
                ListNode *d = temp->next;
                temp->next = temp->next->next;
                delete d;
            }
            else  temp = temp->next;
        }
        return head;
    }
};