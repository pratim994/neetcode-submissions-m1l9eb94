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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

            if(!list1) return list2;

            if(!list2) return list1;


            ListNode *curr1 = list1 , *curr2 = list2;

            while(curr1->next != nullptr && curr2->next != nullptr){

                if(curr1->val <= curr2->val) {

                  curr1->next =  mergeTwoLists(curr1->next , curr2);
                  return list1;
                }

                else if ( curr1->val >= curr2->val){

                  curr2->next =  mergeTwoLists(curr2->next , curr1);
                  return list2;

                }

               
            }


    }
};
