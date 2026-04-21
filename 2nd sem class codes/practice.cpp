#include <iostream>
using namespace std;

class node{
    node *link;
    int info;
    public:
    node(int value){
        info=value;
        link=NULL;
    }
};
node* create_node(int value){
    node *ptr;
    ptr=new node(value);
    return ptr;
}
