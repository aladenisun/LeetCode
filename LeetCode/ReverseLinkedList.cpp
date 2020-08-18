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
    ListNode* reverseList(ListNode* head) {
        /*
        -create prev, curr and next pointers
        - traverse the list until you get to last node
        - change the next pointers as we traverse
        
        -head to NULL = return head
        */
        
        ListNode *current = head;
        ListNode *prev = NULL;
        ListNode *next;
        
        if(head == NULL) return head;
        if(head->next == NULL) return head;
        
        while(current->next != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        
        if(current->next == NULL) current->next = prev;
        
        head = current;
        
        return head;
        
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
   ListNode *current = Example.reverseList(head);
    
    while(current != NULL){
        printf("%i - ",current->val);
        current = current->next;
    }
}



