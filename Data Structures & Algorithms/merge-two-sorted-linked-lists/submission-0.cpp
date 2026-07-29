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
        auto prev = new ListNode();
        auto head = prev;

        while (list1 && list2){
            if (list1->val < list2->val){
                auto res = new ListNode(list1->val);
                prev->next = res;
                prev = prev->next;
                list1 = list1->next;
            } else {
                auto res = new ListNode(list2->val);
                prev->next = res;
                prev = res;
                list2 = list2->next;
            }
        }

        while (list1){
            prev->next = list1;
            list1 = list1->next;
            prev = prev->next;
        }

        while (list2){
            prev->next = list2;
            list2 = list2->next;
            prev = prev->next;
        }

        return head->next;

    }
};
