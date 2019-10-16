ListNode* removeElements(ListNode* head, int val) {
    if(!head) return NULL;
    if(!head->next){
        if(head->val == val) return NULL;
        if(head->val != val) return head;
    }
    ListNode *pre, *p;
    while(head->val == val){
        head = head->next;
        if(head == NULL) return NULL;
    }
    p = head->next;
    pre = head;
    while(p){
        if(p->val == val){
            pre->next = p->next;
            p = p->next;
        }
        else {
            p = p->next;
            pre = pre->next;
        }
    }

    return head;
}
