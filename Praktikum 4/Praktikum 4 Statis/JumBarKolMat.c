/*Nama File : 5_JumbarKolMat.c */
/*Deskripsi : Menghitung dan menjumlahkan semua elemen pada baris dan kolomnya dengan elemen berupa bilangan integer lebih besar dari nol*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */
#include <stdio.h>
#include <stdlib.h>


int main() 
{
//Kamus
    int i;//counter
    int u;//counter
    int a=3;//indeks baris array//matriks
    int b=3;//indeks kolom array//matriks
    int sb;//jumlah pada baris matriks
    int sk;//jumlah pada kolom matriks
    int array[3][3]={{1,3,5},{2,5,2},{4,2,4}};

//Algoritma
for(i=0;i<a;i++)
{
    sb=0;
    for(u=0;u<b;u++)
    {
        printf("%d\t",array[i][u]);
        sb=sb+array[i][u];
    }
    printf("Jumlah baris ke %d:",i+1);
    printf("%d",sb);
    printf("\n");
}
for(i=0;i<a;i++)
{
    sk=0;
    for(u=0;u<b;u++)
    {
        sk=sk+array[u][i];
    }
    printf("Jumlah kolom ke %d:",i+1);
    printf("%d",sk);
    printf("\n");
}
return 0;
}