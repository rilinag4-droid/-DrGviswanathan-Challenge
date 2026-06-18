class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next; // Save next node
            curr->next = prev;               // Reverse current node's pointer
            prev = curr;                     // Move prev forward
            curr = nextNode;                 // Move curr forward
        }

        return prev; // New head of the reversed list
    }
};
