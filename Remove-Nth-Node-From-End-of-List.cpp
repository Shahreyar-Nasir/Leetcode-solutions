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
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14        ListNode* fast = head;
15        ListNode* slow = head;
16        for(int i=0 ; i<n; i++){
17            fast = fast->next;
18        }
19        if(fast == nullptr){
20        ListNode* delNode = head;
21        head = head->next;
22        delete delNode;
23        return head;
24       }
25       
26        while(fast->next !=  nullptr){
27             fast = fast->next;
28             slow = slow->next;
29             
30        }
31      
32        ListNode* delNode = slow->next;
33
34        slow->next = slow->next->next;
35        delete delNode;
36
37        return head;
38
39    }
40};