#include <iostream>
#include <queue>
#include <deque>

using namespace std;

int main() {
    // Queue
    queue<int> myQueue;

    // Menambahkan elemen ke queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Mengakses elemen di depan queue
    cout << "Elemen di depan queue: " << myQueue.front() << endl;

    // Menghapus elemen dari depan queue
    myQueue.pop();

    // Ukuran queue setelah penghapusan
    cout << "Ukuran queue: " << myQueue.size() << endl;

    // Deque
    deque<int> myDeque;

    // Menambahkan elemen ke deque di belakang
    myDeque.push_back(100);
    myDeque.push_back(200);
    myDeque.push_back(300);

    // Menambahkan elemen ke deque di depan
    myDeque.push_front(50);
    myDeque.push_front(25);

    // Mengakses elemen di depan dan belakang deque
    cout << "Elemen di depan deque: " << myDeque.front() << endl;
    cout << "Elemen di belakang deque: " << myDeque.back() << endl;

    // Menghapus elemen dari depan dan belakang deque
    myDeque.pop_front();
    myDeque.pop_back();

    // Ukuran deque setelah penghapusan
    cout << "Ukuran deque: " << myDeque.size() << endl;

    return 0;
}

