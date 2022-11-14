#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int nilai[20];
    int posisi[20];
    int i, n, bilangan, banyak=0;
    bool ketemu;

    cout << "Masukkan Banyaknya Bilangan = ";
    cin >> n;
    cout << endl;

    //Membaca Elemen Array
    for (i=0;i<n;i++){
        cout << "Masukkan Indeks ke-"<<i<<" = ";
        cin >> nilai[i];
    }

    //Mencetak Elemen Array
    cout << "\n\nDeretan Bilangan = ";
    for (i=0;i<n;i++){
        cout<<nilai[i]<<" ";
    }

    cout <<"\n\nMasukkan Bilangan yang akan dicari = ";
    cin >> bilangan;

    //Melakukan Pencarian
    for (i=0;i<n;i++){
        if(nilai[i]==bilangan){
            ketemu=true;
            posisi[banyak]=i;
            banyak++;
        }
    }
    if (ketemu){
        cout << "Bilangan "<<bilangan<<" ditemukan sebanyak "<<banyak;
        cout <<"\npada posisi ke = ";
        for(i=0;i<banyak;i++)
            cout <<posisi[i]<<" ";
    }else{
        cout << "Bilangan "<<bilangan<<" tidak ditemukan";
    }
    getch();
    return 0;
}
