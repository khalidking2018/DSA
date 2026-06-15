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
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) {
            return NULL;
        }
        
        int cnt = 0;
        ListNode* temp = head;
        // Count the number of nodes in the list
        while (temp) {
            cnt++;
            temp = temp->next;
        }

        // Find the middle index
        int k = cnt / 2;

        // Traverse the list to the middle
        ListNode* prev = NULL;
        temp = head;
        for (int c = 0; c < k; c++) {
            prev = temp;
            temp = temp->next;
        }

        // Delete the middle node
        if (prev) {
            prev->next = temp->next;
        }

        return head;
    }
};
