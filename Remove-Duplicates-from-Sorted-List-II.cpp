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
13    ListNode* deleteDuplicates(ListNode* head) {
14        if(head == nullptr || head->next == nullptr) return head;
15        ListNode* dummy = new ListNode(0);
16        dummy->next = head;
17        ListNode* prev = dummy;
18        ListNode* curr = head;
19
20        while(curr != nullptr){
21            if(curr->next != nullptr && curr->val == curr->next->val){
22                  int dup = curr->val;
23                  while(curr != nullptr && curr->val == dup){
24                     curr = curr->next;
25                  }
26                  prev->next = curr;
27            }      
28
29            else{
30                prev = curr;
31                curr = curr->next;
32            }
33        }
34
35        return dummy->next;
36    }
37};