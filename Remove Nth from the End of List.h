/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* begin = new ListNode(0);
        begin->next = head;
        ListNode* temp = begin;
        
        for (int i = 0 ; i < n ; i++){
            if (head == NULL){
                return NULL;
            }
            head = head->next;
        } 
        
        while (head != NULL){
            head = head->next;
            temp = temp->next;
        }
        temp->next = temp->next->next;
        
        return begin->next;
    }
};