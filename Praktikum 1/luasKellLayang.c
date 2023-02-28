/*Nama File : 5_luasKellLayang.c */
/*Deskripsi : Menghitung dan menampilkan di layar luas layang layang dan keliling layang layang,
Luas layang layang=0.5*d1*d2, dan keliling layang layang=2*(s1+s2) */
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1;
    int s2;
    int d1;
    int d2;
    float L;
    float K;

    printf("Masukkan nilai s1:");
    scanf("%d",&s1);

    printf("Masukkan nilai s2:");
    scanf("%d",&s2);

    printf("Masukkan nilai d1:");
    scanf("%d",&d1);

    printf("Masukkan nilai d2:");
    scanf("%d",&d2);

    L=0.5*d1*d2;
    K=2*(s1+s2);

    printf("%f\n",L);
    printf("%f",K);

            return 0;
}
