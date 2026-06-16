class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode *temp = nullptr;

        while(head){
            if(head->next == nullptr){
                return false;
            }
            else if(head->next == (ListNode*)&temp){
                return true;
            }

            temp = head->next;
            head->next = (ListNode*)&temp;
            head = temp;
        }

        return false;
    }
};