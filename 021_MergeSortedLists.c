/*save the result to another list l3 (ret) using the recursive method*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *ret;
    
    //Base case
    if(l1 == NULL){  
        return l2;
    }
    if(l2==NULL){ 
        return l1;
    }
    
    //recursive step
    if( l1->val < l2->val){
        ret=l1;   
        ret->next=mergeTwoLists(l1->next,l2);
    }
    else{ 
        ret=l2;   
        ret->next = mergeTwoLists(l1,l2->next);
    }  
    return ret; 
}
