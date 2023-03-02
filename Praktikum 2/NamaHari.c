/*Nama File : 2_NamaHari.c */
/*Deskripsi : Menuliskan nama - nama hari pada layar berdasarkan angka yang diinputkan(angka 1 untuk hari senin dan seterusnya)*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Masukkan hari yang anda inginkan (dalam angka) :");
    scanf("%d",&i);

    if(i>=1 && i<=7) {
        if(i==1) {
            printf("Hari Senin");
        }else if(i==2) {
            printf("Hari Selasa");
        }else if(i==3) {
            printf("Hari Rabu");
        }else if(i==4) {
            printf("Hari Kamis");
        }else if(i==5) {
            printf("Hari Jumat");
        }else if(i==6) {
            printf("Hari Sabtu");
        }else if(i==7) {
            printf("Hari Minggu");
        }
    }else {
        printf("\nMasukan nomor hari tidak tepat");
    }
                return 0;
}