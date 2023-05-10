/*Nama File : 1_SEQSearchX1.c */
/*Deskripsi : Mencari harga X dalam Tabel T [1..N] secara sekuensial mulai dari T1. Hasilnya adalah
indeks IX dimana T[IX]=X (i terkecil) dan IX akan bernilai 0 apabila elemen tidak ada dalam tabel*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */
#include <stdio.h>
#include <stdlib.h>

int main(){
//Kamus Lokal
    int i;//counter
    int N=8;//Banyak elemen Tabel
    int T[8]= {1,3,5,-8,12,90,3,5};//Tabel
    int X;//Elemen yang ingin dicari
    int IX;//variabel untuk menentukan dimana elemen X ditemukan dalam tabel ( Jika ada )

//Algoritma
    i=0;
    X=90;
    while ((i < N) && (T[i] != X))
    {
        i=i+1;
    }
    //{i=N atau T[i]=X}
    if (T[i]==X)//Telah ditemukan X dalam Tabel T
    {
        IX=(i+1);
        printf("\nMaka X pertama kali ditemukan dalam tabel pada elemen ke : %d",IX);
    }
    else//Tidak ada satupun X dalam Tabel T
    {
        IX=0;
        printf("\nMaka X pertama kali ditemukan dalam tabel pada elemen ke : %d",IX);
    }
    
    


     
}