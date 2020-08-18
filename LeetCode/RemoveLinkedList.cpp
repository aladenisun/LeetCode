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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        /*
        - create current and prev node pointed to head
        - current traverses (n-1) times
        - prev becomes n from current
        - move current until current->next == NULL
        - delete prev.
        */
        
        ListNode *current = head;
        ListNode *prev = head;
        int i = 0;
        
            if(head->next == NULL) return head = NULL;
        
        while(i < n-1){
            current = current->next;
            i++;
        }
        
        printf("current = %i\n", current->val);
        printf("prev = %i\n", prev->val);
        
        
        while(current->next != NULL){
            current = current->next;
            prev = prev->next;
        }
        printf("current = %i\n", current->val);
        printf("prev = %i\n", prev->val);
        
    
        
        //delete the nth from the back
        if(current->next == NULL){
            
            if(prev->next == NULL) {
                ListNode *curr = head;
                while(curr->next != prev){
                    curr = curr->next;
                }
                 curr->next = NULL;
            }
            
            else if(prev->next == current){
                prev->val = prev->next->val;
                prev->next = NULL;
            }
            
            else{
                printf("I'm here!n");
                prev->val = prev->next->val;
                prev->next = prev->next->next;
            }
        }
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
       ListNode *current = Example.removeNthFromEnd(head,2);
    
        while(current != NULL){
            printf("%i - ",current->val);
            current = current->next;
        }
    }

