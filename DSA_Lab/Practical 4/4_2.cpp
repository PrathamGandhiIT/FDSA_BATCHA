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

    void insertEnd(int x) {
        Node* n = new Node(x);

        if (head == NULL) {
            head = n;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = n;
    }

    void deleteValue(int x) {
        if (head == NULL)
            return;

        if (head->data == x) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL && temp->next->data != x)
            temp = temp->next;

        if (temp->next != NULL) {
            Node* del = temp->next;
            temp->next = del->next;
            delete del;
        }
    }

    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    void reversePrint(Node* temp) {
        if (temp == NULL)
            return;

        reversePrint(temp->next);
        cout << temp->data << " ";
    }

    void reverseDisplay() {
        reversePrint(head);
        cout << endl;
    }
};

int main() {
    LinkedList q;

    q.insertEnd(101);
    q.insertEnd(102);
    q.insertEnd(103);
    q.insertEnd(104);
    q.insertEnd(105);

    cout << "Forward: ";
    q.display();

    q.deleteValue(103);

    cout << "After deletion: ";
    q.display();

    cout << "Reverse: ";
    q.reverseDisplay();

    return 0;
}