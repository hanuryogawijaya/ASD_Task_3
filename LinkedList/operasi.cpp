#include "list.h"
#include "operasi.h"


void insertionSort(List &L){
    /**
    * IS : List mungkin kosong
    * PR : mengurutkan elemen di dalam List L menggunakan algoritma insertion sort
    * FS : elemen di dalam List L terurut
    */

    //-------------your code here-------------
    // NIM : 1301164189
    address P, Q, R, S;
    Q = first(L);
    P = next(Q);
    while (P != NULL){
        if (info(P).id < info(Q).id){
            next(Q) = next(P);
            insertFirst(L, P);
        }
        else{
            R = first(L);
            while ((R != P) && (info(P).id > info(R).id)){
                    Q = R;
                    R = next(R);
            }
            if (R != P){
                 next(S) = next(P);
                 insertAfter( Q, P);
            }
             Q = P;
        }

        S = Q;
        P = next(Q);
        Q = first(L);

    //----------------------------------------
}


void deletebyID(List &L, infotype x) {
    /**
    * IS : List L mungkin kosong
    * FS : 1 elemen dengan id info = x.id dihapus dari list (dealokasi)
    */

    address Prec, P;
    //-------------your code here-------------
    // NIM : 1301164189
    P = first(L);
    if (info(P).id == x.id){
        deleteFirst(L, P);
    }
    else {
        while ((info(P).id != x.id) && (P != NULL)){
            Prec = P;
            P = next(P);
            if (P != NULL){
                deleteAfter(Prec, P);
            }
        }
    }


    //----------------------------------------
}
