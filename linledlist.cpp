#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Linkedlist {
public:
    Node* head;
    Node* tail;
    int size;

    Linkedlist() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    Node* cNode(int d) {
        Node* x = new Node;
        x->data = d;
        x->next = NULL;
        return x;
    }

    void insert_at_head(int data) {
        Node* a = cNode(data);
        a->next = head;
        head = a;

        size++;

        if(tail==NULL){
            tail=head;
        }
    }

    void insert_at_position(int data, int index) {
        if (index == 0) {
            return insert_at_head(data);
        }
        int i = 0;
        Node* a = head;
        while (i < index - 1) {
            a = a->next;
            i++;
        }
        Node* x = cNode(data);
        x->next = a->next;
        a->next = x;
        size++;
    }

    void insertAtTail(int data) {
        Node* temp = cNode(data);
        
      
            tail->next = temp;
            tail = temp;
        
    }

    void delete_at_head() {
        if (head != NULL) {
            Node* a = head;
            Node* b = a->next;
            head = b;
            delete a;
        }
    }

    void del_index( int index) {
        if (index == 0) {
            delete_at_head();
        }
        Node* a = head;
        int i = 0;
        while (i < index - 1) {
            a = a->next;
            i++;
        }
        Node* b = a->next;
        Node* c = b->next;
        a->next = c;
        delete b;
    }

    void print() {
        Node* a = head;
        while (a != NULL) {
            cout << a->data << endl;
            a = a->next;
        }
        cout << endl;
    }


    int s(){

        return size;
    }
};

int main() {
    Linkedlist l;
    l.insert_at_head(10);
    l.insert_at_head(10);
    l.insert_at_head(120);
    l.insert_at_head(120);
    l.insert_at_head(3220);
    l.print();
    l.insertAtTail(70);
    //cout<<l.s();
    //l.delete_at_head();
    l.print();
    return 0;
}
