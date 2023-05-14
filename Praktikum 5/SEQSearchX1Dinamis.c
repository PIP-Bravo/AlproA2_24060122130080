/*Nama File : 1_SEQSearchX1Dinamis.c */
/*Deskripsi : Mencari harga X dalam Tabel T [1..N] secara sekuensial mulai dari T1. Hasilnya adalah
indeks IX dimana T[IX]=X (i terkecil) dan IX akan bernilai 0 apabila elemen tidak ada dalam tabel*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */
#include <stdio.h>
#include <stdlib.h>

int main(){
//Kamus Lokal
    int i;//counter
    int u;//counter
    int N;//Banyak elemen Tabel
    int *Tabel;//Deklarasi array integer
    int X;//Elemen yang ingin dicari
    int IX;//variabel untuk menentukan dimana elemen X ditemukan dalam tabel ( Jika ada )

//Algoritma
    printf("Masukkan banyaknya elemen tabel :");
    scanf("%d",&N);//Input banyaknya elemen tabel

    Tabel=(int*)malloc(N*sizeof(int));//Deklarasi pembuatan Tabel dengan muatan tampung elemen sebanyak N

    for(u=0;u<N;u++)//Loop untuk mengisikan elemen elemen Tabel 
    {
        printf("Masukkan Bilangan :");
        scanf("%d",Tabel+u);
    }

    printf("Masukkan banyaknya elemen yang ingin dicari :");//Input elemen apa yang akan dicari
    scanf("%d",&X);

    i=0;
    while ((i < N) && (Tabel[i] != X))
    {
        i=i+1;
    }
    //{i=N atau T[i]=X}
    if (Tabel[i]==X)//Telah ditemukan X dalam Tabel T
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