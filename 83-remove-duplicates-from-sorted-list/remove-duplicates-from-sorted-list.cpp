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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr; // handle empty list

        ListNode* temp = head;
        ListNode* prev = head;

        while (temp != nullptr && temp->next != nullptr) {
            temp = temp->next; // move temp to the next node first

            if (prev->val == temp->val) {
                // duplicate found
                prev->next = temp->next; // skip the duplicate node
                temp = prev; // reset temp back to prev to continue from same spot
            } else {
                // move both pointers forward
                prev = temp;
            }
        }

        return head;
    }
};
