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

Node* create_polynomial() {
    int n, coeff, exp;

    cin >> n;
    Node* Start = nullptr;
    for (int i = 0; i < n; i++) {
        cin >> coeff >> exp;
        Node* temp = create_node(coeff, exp);
        if (Start == nullptr) {
            Start = temp;
        } 
        else {
            Node* ptr = Start;
            while (ptr->link != nullptr) {
                ptr = ptr->link;
            }
            ptr->link = temp;
        }
    }
    return Start;
}

Node* add(Node* poly1, Node* poly2) {
    Node* result = NULL;
    Node* temp1 = poly1;
    Node* temp2 = poly2;
    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->exp > temp2->exp) {
            result = create_node(temp1->coeff, temp1->exp);
            temp1 = temp1->link;
        } else if (temp1->exp < temp2->exp) {
            result = create_node(temp2->coeff, temp2->exp);
            temp2 = temp2->link;
        } else {
            int sum_coeff = temp1->coeff + temp2->coeff;
            if (sum_coeff != 0) {
                result = create_node(sum_coeff, temp1->exp);
            }
            temp1 = temp1->link;
            temp2 = temp2->link;
        }
        if (result != NULL) {
            result->link = add(result, NULL);
        }
    }
    while (temp1 != NULL) {
        result = create_node(temp1->coeff, temp1->exp);
        result->link = add(result, NULL);
        temp1 = temp1->link;
    }
    while (temp2 != NULL) {
        result = create_node(temp2->coeff, temp2->exp);
        result->link = add(result, NULL);
        temp2 = temp2->link;
    }
    return result;
}

int main () {
    Node* poly1 = create_polynomial();
    Node* poly2 = create_polynomial();
    Node* result = add(poly1, poly2);


    cout << "Result of addition: ";

    while (result != NULL) {
        cout << result->coeff << "x^" << result->exp;
        if (result->link != NULL) {
            cout << " + ";
        }
        result = result->link;
    }
    cout << endl;

    return 0;
}