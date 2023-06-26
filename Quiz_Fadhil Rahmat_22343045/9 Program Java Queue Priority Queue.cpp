#include <iostream>
#include <cstdlib>

using namespace std;

struct n {
    int p;
    int info;
    struct n* l;
};

class AntrianPrioritas {
private:
    n* f;

public:
    AntrianPrioritas() {
        f = NULL;
    }

    void masukkan(int i, int p) {
        n* t, * q;
        t = new n;
        t->info = i;
        t->p = p;
        t->l = NULL;

        if (f == NULL || p < f->p) {
            t->l = f;
            f = t;
        } else {
            q = f;
            while (q->l != NULL && q->l->p <= p)
                q = q->l;
            t->l = q->l;
            q->l = t;
        }
    }

    void hapus() {
        n* t;
        if (f == NULL)
            cout << "Antrian kosong" << endl;
        else {
            t = f;
            cout << "Item yang dihapus: " << t->info << endl;
            f = f->l;
            delete t;
        }
    }

    void tampilkan() {
        n* ptr;
        ptr = f;
        if (f == NULL)
            cout << "Antrian kosong" << endl;
        else {
            cout << "Antrian:" << endl;
            cout << "Prioritas Item" << endl;
            while (ptr != NULL) {
                cout << ptr->p << " " << ptr->info << endl;
                ptr = ptr->l;
            }
        }
    }
};

int main() {
    int c, i, p;
    AntrianPrioritas ap;
    do {
        cout << "1. Masukkan" << endl;
        cout << "2. Hapus" << endl;
        cout << "3. Tampilkan" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> c;

        switch (c) {
            case 1:
                cout << "Masukkan nilai item yang akan ditambahkan ke dalam antrian: ";
                cin >> i;
                cout << "Masukkan prioritasnya: ";
                cin >> p;
                ap.masukkan(i, p);
                break;
            case 2:
                ap.hapus();
                break;
            case 3:
                ap.tampilkan();
                break;
            case 4:
                break;
            default:
                cout << "Pilihan salah" << endl;
        }
    } while (c != 4);

    return 0;
}

