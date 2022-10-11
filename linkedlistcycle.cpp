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
    bool hasCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL)
            return false;

        ListNode *cur = head;
        ListNode *pos = head;
      
        while(true)
        { 
            cur = cur->next;
            pos = pos->next;
            if(cur != NULL)
                cur = cur->next;
            if(cur == NULL ||  pos == NULL)
                return false;
                    
            else if(cur == pos)
                return true;
        }
    }
};
