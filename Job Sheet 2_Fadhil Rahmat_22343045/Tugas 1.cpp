#include <iostream>
#include <string>
using namespace std;
 
struct mahasiswa{
    string NIM;
    string nama;
    string tanggal_lahir;
    float ipk;
};
 
int main(){
 
    mahasiswa mhs;
 
    mhs.NIM="22343045";
    mhs.nama="Fadhil Rahmat";
    mhs.tanggal_lahir="19 April 2004";
	mhs.ipk=3.20;
    
    cout<<"DATA MAHASISWA"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"NIM    		: "<<mhs.NIM<<endl;
    cout<<"nama 		: "<<mhs.nama<<endl;
	cout<<"tanggal lahir	: "<<mhs.tanggal_lahir<<endl;
    cout<<"IPK     	: "<<mhs.ipk<<endl;
      
    return 0;
}
