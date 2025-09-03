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
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        stack<int> st;
        ListNode* temp = head;

        // Step 1: Push all elements to stack
        while (temp) {
            st.push(temp->val);
            temp = temp->next;
        }

        // Step 2: Compare while popping from stack
        temp = head;
        while (temp) {
            int topVal = st.top();
            st.pop();
            if (temp->val != topVal) {
                return false;
            }
            temp = temp->next;
        }

        return true;
    }
};
