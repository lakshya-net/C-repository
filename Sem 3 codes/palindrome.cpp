stack <int> ans;
        ListNode* ptr=head;
        while(ptr!=NULL){
                ans.push(ptr->val);
                ptr=ptr->next;
        }
        ptr=head;
        while(ptr!=NULL){
            if(ans.top()!=ptr->val){
                return false;
            }
            ans.pop();
            ptr=ptr->next;
        }
        return true;