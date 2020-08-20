 #include <iostream>
 #include <vector>
 #include <unordered_map>
 #include <ctype.h>
 #include <algorithm>
 #include <set>
 #include <iterator>

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        /*
        Conditions:
        - pos = -1 so prev->next == NULL
        - curr == NULL and prev == NULL
        Algorithm
        -
        
        */
        
        ListNode* curr = head;
        ListNode* prev = head;
        
        while(curr != NULL && prev != NULL && prev->next != NULL){
            curr = curr->next;
            prev = prev->next->next;
            
            if(curr == prev) return true;
            
        }
        return false;
    }
};

void push(ListNode** head_ref, int new_data)
{
    ListNode* new_node = new ListNode();
  
    new_node->val = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

int main(){
    ListNode *head = NULL;
    
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    
    Solution Example;
    bool res = Example.hasCycle(head);
    

        printf("Output: %s\n", res? "true":"false");
    
    
}



