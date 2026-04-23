#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void append(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

}

Node* create_doubly_linked_list(int arr[], int size) {
    DoublyLinkedList list;
    for (int i = 0; i < size; i++) {
        list.append(arr[i]);
    }
    return list.head;
}










void insert_beginning(int value){
    Node* newNode = new Node(value);
    Node *next, *prev;
    Node* temp = head;

        newNode->next = head;
        head->prev = newNode;
        head = newNode;


}
