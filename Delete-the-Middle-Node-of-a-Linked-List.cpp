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
19         ListNode* temp = head;
20
21         while(fast != nullptr  && fast->next != nullptr){
22            fast = fast->next->next;
23            slow = slow->next;
24         }
25
26         while(temp->next != slow){
27           temp = temp->next;
28         }
29
30         temp->next = temp->next->next;
31         delete slow;
32
33         return head;
34
35    }
36};