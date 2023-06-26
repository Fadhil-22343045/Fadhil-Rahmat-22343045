#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node *simpul;
struct node
{
  char Isi;
  simpul Next;
};

void Sisip_Depan(simpul &L, char elemen);
void Hapus_Depan(simpul &L);
void Cetak(simpul L);

int main()
{
  char huruf;
  simpul L = NULL;
  cout<<"==OPERASI PADA SINGLE LINKED LIST=="<<endl;
  
  // Sisip Depan
  cout<<"Penyisipan Simpul Di Depan"<<endl<<endl;
  cout<<"Masukkan Huruf :"; cin>>huruf;
  Sisip_Depan(L, huruf);
  cout<<"Masukkan Huruf :"; cin>>huruf;
  Sisip_Depan(L, huruf);
  cout<<"Masukkan Huruf :"; cin>>huruf;
  Sisip_Depan(L, huruf);
  cout<<"Masukkan Huruf :"; cin>>huruf;
  Sisip_Depan(L, huruf);
  Cetak(L);
  
  // Hapus Simpul Depan
  cout<<endl<<endl<<"Setelah Hapus Simpul Depan "<<endl;
  Hapus_Depan(L);
  Cetak(L);
  
  return 0;
}

void Sisip_Depan(simpul &L, char elemen)
{
  simpul baru = new node;
  baru->Isi = elemen;
  baru->Next = L;
  L = baru;
}

void Hapus_Depan(simpul &L)
{
  if(L==NULL)
    cout<<"Linked List Kosong ...........";
  else
  {
    simpul hapus = L;
    L = L->Next;
    delete hapus;
  }
}

void Cetak(simpul L)
{
  simpul bantu = L;
  if(L == NULL)
    cout<<"Linked List Kosong ......"<<endl;
  else
  {
    cout<<"Isi Linked List : ";
    while (bantu != NULL)
    {
      cout<<bantu->Isi<<"-->";
      bantu = bantu->Next;
    }
    cout<<"NULL";
  }
}

