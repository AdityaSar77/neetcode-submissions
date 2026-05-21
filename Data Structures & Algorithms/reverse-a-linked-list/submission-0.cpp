class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* next;
        ListNode* prev = nullptr;

        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
        //P    C    N
        //     1 -> 2 -> 3 -> 4 -> 5
        //n <- 1 <- 2 <- 3 <- 4 <- 5
    }
};