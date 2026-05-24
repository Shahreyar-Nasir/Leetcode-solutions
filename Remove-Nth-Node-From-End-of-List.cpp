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
14    int count = 0;
15    ListNode* temp = head;
16
17    // Count nodes
18    while (temp != nullptr) {
19        count++;
20        temp = temp->next;
21    }
22
23    int targnode = count - n;
24
25    // Dummy node
26    ListNode* dummy = new ListNode(0);
27    dummy->next = head;
28
29    ListNode* temp2 = dummy;
30
31    // Move to node before target
32    for (int i = 0; i < targnode; i++) {
33        temp2 = temp2->next;
34    }
35
36    // Node to delete
37    ListNode* delNode = temp2->next;
38
39    // Remove link
40    temp2->next = temp2->next->next;
41
42    // Delete node
43    delete delNode;
44
45    return dummy->next;
46
47    }
48};