#include <iostream>
using namespace std;


class node
{
    node *link;
    int info;
public:
    node(int value)
    {
        info=value;
        link=NULL;
    }
};

node* create_node(int value)
{
    node *ptr;
    ptr=new node(value);
    return ptr;
}

node* create_cll()
{
    int value;
    cin>>value;
    node *
    ptr,*nptr,*start;
    ptr=create_node(value);
    start=ptr;
    int ch;
    cin>>ch;
    while(ch==1)
    {
        cin>>value;
        nptr=create_node(value);
        ptr->link=nptr;
        ptr=nptr;
        cin>>ch;
    }
    ptr->link=start;
    return start;
}

void traverse(node* temp)
{
    node *start=temp;
    while(temp->link!=start)
    {
        cout<<temp->info<<" ";
        temp=temp->link;
    }
    cout<<temp->info<<" "; 
}

void insert_beg(node* &start)
{
    int value;
    cin>>value;
    node *ptr;
    ptr=create_node(value);
    node *temp=start;
    while(temp->link!=start)
    {
        temp=temp->link;
    }
    temp->link=ptr;
    ptr->link=start;
    start=ptr;
}

void delete_end(node* &start)
{
    node *temp=start;
    while(temp->link->link!=start)
    {
        temp=temp->link;
    }
    node *ptr=temp->link;
    temp->link=start;
    delete ptr;
}

int main()
{
    node *start;
    start=create_cll();
    traverse(start);
    cout<<endl;
    insert_beg(start);
    traverse(start);
    cout<<endl;
    delete_end(start);
    traverse(start);
}