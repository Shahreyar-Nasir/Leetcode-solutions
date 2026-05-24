1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* deleteMiddle(ListNode* head) {
14        // general version of remove nth node from end
15        if(head->next == nullptr) return nullptr;
16
17         ListNode* fast = head;
18         ListNode* slow = head;
19    
20         //skip one time
21         fast = fast->next->next;
22        
23         while(fast != nullptr  && fast->next != nullptr){
24            fast = fast->next->next;
25            slow = slow->next;
26         }
27
28          ListNode* temp = slow->next;
29          slow->next = slow->next->next;
30          delete temp;
31          return head;
32
33    }
34};