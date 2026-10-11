
#include <iostream>
#include "Singlylist.h"

using namespace std;

// Membuat list kosong
void createList(List &L) {
    L.First = nullptr;
}

// Mengalokasikan elemen baru
address alokasi(infotype x) {
    address P = new ElmList;

    if (P != nullptr) {
        P->info = x;
        P->next = nullptr;
    }

    return P;
}

// Menghapus alokasi memori
void dealokasi(address &P) {
    if (P != nullptr) {
        delete P;
        P = nullptr;
    }
}

// Menampilkan seluruh isi list
void printInfo(List L) {
    address P = L.First;

    while (P != nullptr) {
        cout << P->info;

        if (P->next != nullptr) {
            cout << " -> ";
        }

        P = P->next;
    }

    cout << " -> NULL" << endl;
}

// Menambahkan elemen di awal list
void insertFirst(List &L, address P) {
    if (P != nullptr) {
        P->next = L.First;
        L.First = P;
    }
}
