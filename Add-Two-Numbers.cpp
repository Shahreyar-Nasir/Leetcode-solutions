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
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14        ListNode* res = new ListNode(0);
15        ListNode* ptr = res;
16
17        int carry =0;
18
19        while(l1 != nullptr || l2 != nullptr){
20            int sum = 0+carry;
21
22            if(l1){
23                sum += l1->val;
24                l1 = l1->next;
25            }
26            if(l2){
27                sum += l2->val;
28                l2 = l2->next ;
29            }
30
31            carry = sum/10;
32            sum %= 10;
33            ptr->next = new ListNode(sum);
34            ptr = ptr->next;
35        }
36
37        if(carry ==1) ptr->next = new ListNode(1);
38        return res->next;
39    }
40};