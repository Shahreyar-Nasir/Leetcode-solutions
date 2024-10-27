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
    ListNode* reverseList(ListNode* head) {
    ListNode* y = NULL;
     ListNode* z = NULL;
     while(head!=NULL){
     z=head->next;
     head->next = y;
     y = head;
     head = z;
     }
     head = y;
     y= NULL;
     return head;
    }
};