1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *detectCycle(ListNode *head) {
12        if (head==nullptr || head->next == nullptr) return nullptr;
13        if(head->next == head) return head;
14         ListNode* fast = head;
15         ListNode* slow = head;
16         while (fast != nullptr && fast->next != nullptr) {
17
18            slow = slow->next;
19            fast = fast->next->next;
20
21            if(slow==fast){
22
23                ListNode* temp = head;
24
25                while (temp != slow) {
26                    temp = temp->next;
27                    slow = slow->next;
28                }
29
30                return temp;
31            }
32         }
33         return nullptr;
34    }
35};