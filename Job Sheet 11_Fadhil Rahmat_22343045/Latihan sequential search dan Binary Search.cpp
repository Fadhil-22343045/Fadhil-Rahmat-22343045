#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    int NIM;
    string Nama;
    string TTL;
    float IPK;
};

int sequentialSearch(Mahasiswa arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i].NIM == key) {
            return i;  // Mengembalikan indeks ketika ditemukan
        }
    }
    return -1;  // Mengembalikan -1 jika tidak ditemukan
}

int binarySearch(Mahasiswa arr[], int low, int high, int key) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid].NIM == key) {
            return mid;  // Mengembalikan indeks ketika ditemukan
        }
        if (arr[mid].NIM > key) {
            return binarySearch(arr, low, mid - 1, key);
        }
        return binarySearch(arr, mid + 1, high, key);
    }
    return -1;  // Mengembalikan -1 jika tidak ditemukan
}

int main() {
    const int MAX_SIZE = 100;
    Mahasiswa dataMahasiswa[MAX_SIZE];
    int n;
    
    cout << "Masukkan jumlah data mahasiswa: ";
    cin >> n;
    
    cout << "Masukkan data mahasiswa: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << endl;
        
        cout << "NIM: ";
        cin >> dataMahasiswa[i].NIM;
        
        cout << "Nama: ";
        cin.ignore();
        getline(cin, dataMahasiswa[i].Nama);
        
        cout << "TTL: ";
        getline(cin, dataMahasiswa[i].TTL);
        
        cout << "IPK: ";
        cin >> dataMahasiswa[i].IPK;
    }
    
    int searchNIM;
    cout << "Masukkan NIM yang ingin dicari: ";
    cin >> searchNIM;
    
    int sequentialIndex = sequentialSearch(dataMahasiswa, n, searchNIM);
    if (sequentialIndex != -1) {
        cout << "Data ditemukan dengan metode Sequential Search." << endl;
        cout << "NIM: " << dataMahasiswa[sequentialIndex].NIM << endl;
        cout << "Nama: " << dataMahasiswa[sequentialIndex].Nama << endl;
        cout << "TTL: " << dataMahasiswa[sequentialIndex].TTL << endl;
        cout << "IPK: " << dataMahasiswa[sequentialIndex].IPK << endl;
    } else {
        cout << "Data tidak ditemukan dengan metode Sequential Search." << endl;
    }
    
    // Sorting data mahasiswa berdasarkan NIM sebelum melakukan binary search
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (dataMahasiswa[j].NIM > dataMahasiswa[j + 1].NIM) {
                swap(dataMahasiswa[j], dataMahasiswa[j + 1]);
            }
        }
    }
    
    int binaryIndex = binarySearch(dataMahasiswa, 0, n - 1, searchNIM);
    if (binaryIndex != -1) {
        cout << "Data ditemukan dengan metode Binary Search." << endl;
        cout << "NIM: " << dataMahasiswa[binaryIndex].NIM << endl;
        cout << "Nama: " << dataMahasiswa[binaryIndex].Nama << endl;
        cout << "TTL: " << dataMahasiswa[binaryIndex].TTL << endl;
        cout << "IPK: " << dataMahasiswa[binaryIndex].IPK << endl;
    } else {
        cout << "Data tidak ditemukan dengan metode Binary Search." << endl;
    }
    
    return 0;
}

