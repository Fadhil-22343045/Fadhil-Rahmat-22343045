#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Membuat priority queue dengan tipe data integer
    priority_queue<int> pq;
    
    // Menambahkan elemen ke priority queue
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);
    
    // Mengakses elemen teratas dari priority queue
    cout << "Elemen teratas: " << pq.top() << endl;
    
    // Menghapus elemen teratas dari priority queue
    pq.pop();
    
    // Mengakses elemen teratas setelah penghapusan
    cout << "Elemen teratas setelah penghapusan: " << pq.top() << endl;
    
    // Menampilkan semua elemen dalam priority queue
    cout << "Isi priority queue: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    
    return 0;
}

