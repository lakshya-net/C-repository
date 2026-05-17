#include <iostream>
using namespace std;
class Node {
public:    
    int coeff;
    int exp;
    Node* link;
    Node(int c, int e) {
        coeff = c; exp = e; link = nullptr;
    }
};
Node* create_node(int c, int e) {
    Node* temp = new Node(c, e);
    return temp;
}



Node* add(Node* poly1, Node* poly2) {
    Node* head = NULL;
    Node* tail = NULL;

    while (poly1 != NULL && poly2 != NULL) {
        Node* newNode = NULL;

        if (poly1->exp > poly2->exp) {
            newNode = create_node(poly1->coeff, poly1->exp);
            poly1 = poly1->link;
        }
        else if (poly1->exp < poly2->exp) {
            newNode = create_node(poly2->coeff, poly2->exp);
            poly2 = poly2->link;
        }
        else {
            int sum = poly1->coeff + poly2->coeff;
            if (sum != 0) {
                newNode = create_node(sum, poly1->exp);
            }
            poly1 = poly1->link;
            poly2 = poly2->link;
        }

        if (newNode != NULL) {
            if (head == NULL) {
                head = tail = newNode;
            } else {
                tail->link = newNode;
                tail = newNode;
            }
        }
    }

    // Remaining terms
    while (poly1 != NULL) {
        Node* newNode = create_node(poly1->coeff, poly1->exp);
        if (head == NULL) head = tail = newNode;
        else {
            tail->link = newNode;
            tail = newNode;
        }
        poly1 = poly1->link;
    }

    while (poly2 != NULL) {
        Node* newNode = create_node(poly2->coeff, poly2->exp);
        if (head == NULL) head = tail = newNode;
        else {
            tail->link = newNode;
            tail = newNode;
        }
        poly2 = poly2->link;
    }

    return head;
}