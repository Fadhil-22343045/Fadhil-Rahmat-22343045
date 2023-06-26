#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;
    
public:
    Queue() {
        front = NULL;
        rear = NULL;
    }
    
    bool isEmpty() {
        return (front == NULL);
    }
    
    void enqueue(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        
        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        
        cout << "Elemen " << value << " telah ditambahkan ke dalam queue." << endl;
    }
    
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong. Tidak dapat melakukan dequeue." << endl;
        } else {
            Node* temp = front;
            cout << "Elemen " << front->data << " telah dihapus dari queue." << endl;
            front = front->next;
            delete temp;
        }
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Queue kosong." << endl;
        } else {
            cout << "Isi queue: ";
            Node* temp = front;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main() {
    Queue queue;
    
    queue.display(); // Output: Queue kosong.
    
    queue.enqueue(10); // Output: Elemen 10 telah ditambahkan ke dalam queue.
    queue.enqueue(20); // Output: Elemen 20 telah ditambahkan ke dalam queue.
    queue.enqueue(30); // Output: Elemen 30 telah ditambahkan ke dalam queue.
    
    queue.display(); // Output: Isi queue: 10 20 30
    
    queue.dequeue(); // Output: Elemen 10 telah dihapus dari queue.
    queue.dequeue(); // Output: Elemen 20 telah dihapus dari queue.
    
    queue.display(); // Output: Isi queue: 30
    
    queue.dequeue(); // Output: Elemen 30 telah dihapus dari queue.
    queue.dequeue(); // Output: Queue kosong. Tidak dapat melakukan dequeue.
    
    return 0;
}

