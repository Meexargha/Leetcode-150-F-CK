
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        ListNode* first = head;

        while (first != nullptr && first->next != nullptr) {
            ListNode* second = first->next;

            first->next = second->next;
            second->next = first;
            prev->next = second;

            prev = first;
            first = first->next;
        }

        return dummy.next;
    }
};
