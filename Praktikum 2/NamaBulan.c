/*Nama File : 3_NamaBulan.c */
/*Deskripsi : Menuliskan nama - nama bulan pada layar berdasarkan angka yang diinputkan(angka 1 untuk Bulan Januari dan seterusnya)*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
    int i;
    
//Algoritma
    printf("Masukkan bulan yang anda inginkan (dalam angka) :");
    scanf("%d",&i);

    if(i>=1 && i<=12) {
        if(i==1) {
            printf("Bulan Januari");
        }else if(i==2) {
            printf("Bulan Februari");
        }else if(i==3) {
            printf("Bulan Maret");
        }else if(i==4) {
            printf("Bulan April");
        }else if(i==5) {
            printf("Bulan Mei");
        }else if(i==6) {
            printf("Bulan Juni");
        }else if(i==7) {
            printf("Bulan Juli");
        }else if(i==8) {
            printf("Bulan Agustus");
        }else if(i==9) {
            printf("Bulan September");
        }else if(i==10) {
            printf("Bulan Oktober");
        }else if(i==11) {
            printf("Bulan November");
        }else if(i==12) {
            printf("Bulan Desember");
        }
    }else {
        printf("\nMasukan nomor bulan tidak tepat");
    }
                return 0;
}
