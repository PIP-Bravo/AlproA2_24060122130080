/*Nama File : 3_gayaSentr.c */
/*Deskripsi : Menghitung dan menampilkan gaya sentripetal F di layar, F=m*(v*v/r) */
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include <stdio.h>
#include <stdlib.h>

//Kamus
int main()
{
    int m;
    int v;
    int r;
    float F;
    const int g=10;

//Algoritma
    printf("Masukkan nilai m:");
    scanf("%d",&m);

    printf("Masukkan nilai v:");
    scanf("%d",&v);

    printf("Masukkan nilai r:");
    scanf("%d",&r);

    F=m*(v*v/r);

    printf("%f",F);

            return 0;
}

