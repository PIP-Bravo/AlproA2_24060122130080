/*Nama File : 2_jarakPBola.c */
/*Deskripsi : Menghitung dan menampilkan jarak y di layar, y=v0*t - 0.5*(g*t*t) */
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include <stdio.h>
#include <stdlib.h>

//Kamus
int main()
{
    int v0;
    int t;
    float y;
    const int g=10;
    
//Algoritma
    printf("Masukkan nilai v0:");
    scanf("%d",&v0);

    printf("Masukkan nilai t:");
    scanf("%d",&t);

    y=v0*t - 0.5*(g*t*t);

    printf("%f",y);

            return 0;
}

