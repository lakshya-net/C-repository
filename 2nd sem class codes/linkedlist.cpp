#include<iostream>
using namespace std;

class node{
    public:
    int info;
    node *link;
    node(int value){
        info=value;
        link=NULL;
    }
};
node* create_node(int value){
    node *ptr; 
    ptr=new node(value);
    return(ptr);
}
node* create_sll(){
    int value;
    node *ptr,*nptr,*start;
    cin>>value;
    ptr=create_node(value);
    start=ptr;
    int ch;
    cin>>ch;
    while(ch==1){
        cin>>value;
        nptr=create_node(value);
        ptr->link=nptr;
        ptr=nptr;
        cin>>ch;
    }
    return start;
}

void traverse(node* temp){
    while(temp->link!=NULL){ 
        cout<<temp->info<<" ";
        temp=temp->link;
    }
}

void insert_beg(node* &start){
    int value;
    cin>>value;
    node *ptr;
    ptr=create_node(value);
    ptr->link=start;
    start=ptr;
}

int count(node* temp){
    int c=0;
    while(temp!=NULL){
        c++;
        temp=temp->link;
    }
    return c;
}
node* delete_loc(node *start){
    int loc;
    cin>>loc;
    node *temp1,*temp;
    temp=start;
    int k=1;
    while(k!=loc-1){
        temp=temp->link;
        k++;
    }
    temp1=temp->link;
    temp->link=temp1->link;
    delete temp1;

}

void reverse(node* start){
    node *p,*q,*r;
    r=NULL;
    p=start;
    while(p!=NULL){
        q=p;
        p=p->link;
        q->link=r;
        r=q;
    }
     p->link=q;
    start=p;
}

int main(){
    node* start;
    start=create_sll();
    reverse(start);
    traverse(start);
}
