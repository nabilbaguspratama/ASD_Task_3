#include "list.h"
#include "operasi.h"


address sentinelSearch(List L, infotype x){
    /**
    * IS : List mungkin kosong
    * PR : mencari elemen dengan ID infotype = infotype x menggunakan bantuan sentinel
    * FS : mengembalikan address elemen dengan ID infotype x jika ditemukan,
    *      mengembalikan NULL jika tidak ditemukan
    */
    //-------------your code here-------------
    // NIM : 1301154365
    address P ;
    if (first(L)== Nill){
        return Nill;
    }
    else {
        P=first(L);
        while ( next(P) != Nill && info(P).id != x.id){
            P = next(P);
        }
        if (info(P).id == x.id){
            return P;
        }
        else{
            return Nill;
        }
    }

    //----------------------------------------

}


void insertionSort(List &L){
    /**
    * IS : List mungkin kosong
    * PR : mengurutkan elemen di dalam List L menggunakan algoritma insertion sort
    * FS : elemen di dalam List L terurut
    */

    //-------------your code here-------------
    // NIM : 


    //----------------------------------------
}


void deletebyID(List &L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : 1 elemen dengan id info = x.id dihapus dari list (dealokasi)
    */

    address Prec, P;
    //-------------your code here-------------
    // NIM : 1301154519
    Prec = findElm(L,x);
    deleteAfter(Prec,P);
    cout<<"Id yang akan di Hapus adalah : "<<info(P).id<<endl;
    dealokasi(P);

    //----------------------------------------
}
