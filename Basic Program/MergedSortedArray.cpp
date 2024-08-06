class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Edge cases: if one of the lists is null, return the other list
        if (!list1) return list2;
        if (!list2) return list1;
        
        // Create a dummy node to act as the head of the merged list
        ListNode dummy;
        ListNode* tail = &dummy;
        
        // Traverse both lists
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                // Append the smaller node to the merged list
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            // Move the tail pointer forward
            tail = tail->next;
        }
        
        // Directly connect the remaining part of the non-exhausted list
        tail->next = list1 ? list1 : list2;
        
        // The merged list is next to the dummy node
        return dummy.next;
    }
};