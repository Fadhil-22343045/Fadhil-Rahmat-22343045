#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList;
    
    // Menambahkan elemen ke dalam list
    myList.push_back(33);
    myList.push_back(36);
    myList.push_back(47);
    
    // Mengakses elemen pada list menggunakan iterator
    list<int>::iterator it;
    for (it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    
    // Menghapus elemen dari list
    myList.remove(36);
    
    cout << "\nSetelah menghapus elemen 36: ";
    for (it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    
    return 0;
}

