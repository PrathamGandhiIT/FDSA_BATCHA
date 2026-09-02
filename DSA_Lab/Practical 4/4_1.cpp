#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class LinkedList {
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insertFront(int x) {
        Node* n = new Node(x);
        n->next = head;
        head = n;
        display();
    }

    void insertEnd(int x) {
        Node* n = new Node(x);

        if (head == NULL) {
            head = n;
        } else {
            Node* temp = head;
            while (temp->next != NULL)
                temp = temp->next;

            temp->next = n;
        }

        display();
    }

    void insertAt(int x, int pos) {
        if (pos <= 1) {
            insertFront(x);
            return;
        }

        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL) {
            cout << "Invalid position" << endl;
            return;
        }

        Node* n = new Node(x);
        n->next = temp->next;
        temp->next = n;

        display();
    }

    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    LinkedList q;

    q.insertFront(101);
    q.insertEnd(102);
    q.insertEnd(103);
    q.insertAt(104, 2);
    q.insertAt(105, 10);

    return 0;
}
