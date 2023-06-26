#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, string> myDictionary;
    
    // Menambahkan pasangan key-value ke dalam dictionary
    myDictionary["apple"] = "apel";
    myDictionary["banana"] = "pisang";
    myDictionary["orange"] = "jeruk";
    
    // Mengakses nilai pada dictionary menggunakan key
    cout << "Terjemahan banana: " << myDictionary["banana"] << endl;
    
    // Menampilkan seluruh pasangan key-value pada dictionary
    map<string, string>::iterator it;
    for (it = myDictionary.begin(); it != myDictionary.end(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }
    
    // Menghapus pasangan key-value dari dictionary
    myDictionary.erase("orange");
    
    cout << "\nSetelah menghapus pasangan orange:" << endl;
    for (it = myDictionary.begin(); it != myDictionary.end(); ++it) {
        cout << it->first << " => " << it->second << endl;
    }
    
    return 0;
}

