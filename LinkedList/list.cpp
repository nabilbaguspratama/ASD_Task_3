#include "list.h"

void createList(List &L) {
    /**
    * FS : first(L) diset Nil
    */
    //-------------your code here-------------
    // NIM :1301144365
    first(L) = Nill;
    //----------------------------------------
}



address alokasi(infotype x) {
    /**
    * FS : mengembalikan elemen list baru dengan info = x, next elemen = Nil
    */

    address P = new elmlist;
    //-------------your code here-------------
    // NIM :1301144365
    info(P) = x;

    next(P) = Nill;
    //----------------------------------------
    return P;
}
void dealokasi(address &P) {
    /**
    * FS : menghapus elemen yang ditunjuk oleh P (delete)
    */
    //-------------your code here-------------
    // NIM :1301154519
    delete P;
    //----------------------------------------
}
void insertFirst(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen pertama pada List L
    */
    //-------------your code here-------------
    // NIM :1301154519
    if (first(L) == Nill){
        first(L) = P;
    } else {
        next(P) = first(L);
        first(L) = P;
    }

    //----------------------------------------
}

void insertLast(List &L, address P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen yang ditunjuk P menjadi elemen terakhir pada List L
    */
    //-------------your code here-------------
    // NIM :1301154519
    if (first(L) == Nill){
        first(L) = P;
    } else {
        address Q = first(L);
        while (Q->next != Nill){
            Q = Q->next;
        }
        Q->next = P;
    }

    //----------------------------------------
}

address findElm(List L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : mengembalikan elemen dengan info.ID = x.ID,
           mengembalikan Nil jika tidak ditemukan
    */

    address P = first(L);
    //-------------your code here-------------
    // NIM :1301154365
    while (next(P) != Nill){
        if (info(P).id == x.id){
            P = next(P);
        } else {
            P = next(P);
        }
    }
    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen pertama di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM :1301154105
    if (first(L) != Nill){
        P = first(L);
        if (next(P) == Nill){
            first(L) = Nill;
        } else {
            first(L) = next(P);
            next(P) = Nill;
        }
    }
    //----------------------------------------
}


void deleteLast(List &L, address &P) {
    /**
    * IS : List L mungkin kosong
    * FS : elemen tarakhir di dalam List L dilepas dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM :1301154105
    if (first(L) != Nill){
        address Q = first(L);
        if (Q->next == Nill){
            first(L) = Nill;
        } else {
            while ((Q->next)->next != Nill){
                Q = Q->next;
            }
            Q->next = Nill;
            P = Q->next;
        }
    }
    //----------------------------------------
}

void printInfo(List L) {
    /**
    * FS : menampilkan info seluruh elemen list L
    */
    //-------------your code here-------------
    // NIM :1301154105
    address P = first(L);
    while (P != Nill){
        cout<<"id kereta                     : "<<info(P).id<<endl;
        cout<<"nama kereta                   : "<<info(P).nama<<endl;
        cout<<"kelas kereta                  : "<<info(P).kelas<<endl;
        cout<<"kapasitas tiap gerbong kereta : "<<info(P).kapasitas_gerbong<<endl;
        cout<<"jumlah gerbong kereta         : "<<info(P).jmlh_gerbong<<endl;
        cout<<endl;
        P = next(P);
    }
    //----------------------------------------
}


void insertAfter(address Prec, address P) {
    /**
    * IS : Prec dan P tidak NULL
    * FS : elemen yang ditunjuk P menjadi elemen di belakang elemen yang
    *      ditunjuk pointer Prec
    */
    //-------------your code here-------------
    // NIM :1301154365
    if((Prec != Nill)&&(P!=Nill)){
        if(next(Prec) != Nill){
            next(Prec) = P;
            next(P) = next(next(Prec));
        } else {
            next(Prec) = P;
            next(P)= Nill;
        }
    } else {
        cout<<"Address Tidak Ditemukan !"<<endl;
    }

    //----------------------------------------

}

void deleteAfter(address Prec, address &P) {
    /**
    * IS : Prec tidak NULL
    * FS : elemen yang berada di belakang elemen Prec dilepas
    *      dan disimpan/ditunjuk oleh P
    */
    //-------------your code here-------------
    // NIM :13011154365
    if (Prec!= Nill){
        if (next(Prec)!=Nill){
            P = next(Prec);
            next(Prec)= next(P);
            next(P)=Nill;
        }
    } else {
        cout<<"Address Tidak Ditemukan"<<endl;
    }

    //----------------------------------------
}

