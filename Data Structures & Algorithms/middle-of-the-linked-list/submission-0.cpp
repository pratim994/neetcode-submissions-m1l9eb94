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
    ListNode* middleNode(ListNode* head) {
        ListNode *curr =  head, *nextL = head;

        while(nextL!= nullptr && nextL->next != nullptr){
            

            nextL = nextL->next->next;

            curr = curr->next;
        }
        
           return curr;
    }
};