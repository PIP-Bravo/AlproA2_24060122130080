/*Nama File : 4_volBolaKerct.c */
/*Deskripsi : Menghitung dan menampilkan di layar volume bola dan volume kerucut, Volume bola=4/3*(phi*r*r*r), dan volume kerucut=1/2*Volume bola*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include <stdio.h>
#include <stdlib.h>

//Kamus
int main()
{
    int r;
    float Vb;
    float Vk;
    const float phi=3.14;
    
//Algoritma
    printf("Masukkan nilai r:");
    scanf("%d",&r);

    Vb=4*(phi*r*r*r)/3;
    Vk=0.5*Vb;

    printf("%f\n",Vb);
    printf("%f",Vk);

            return 0;
}
