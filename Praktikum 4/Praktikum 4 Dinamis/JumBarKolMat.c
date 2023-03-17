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
    int a;//indeks baris array//matriks
    int b;//indeks kolom array//matriks
    int sb;//jumlah pada baris matriks
    int sk;//jumlah pada kolom matriks

//Algoritma
    printf("Masukkan Ordo Matriks:");
    scanf("%dx%d",&a,&b);

    int array[a][b];

    if(a>0 && b>0)
    {
        printf("\nInputan elemen matriks\n\n");
        for(i=1;i<=a;i++)
        {
            for(u=1;u<=b;u++)
            {
                printf("Masukkan Elemen [%d][%d]=",i,u);
                scanf("%d",&array[i][u]);
            }
        }
        printf("\nData Matriks:\n\n");
        for(i=1;i<=a;i++)
        {
            sb=0;
            for(u=1;u<=b;u++)
            {
                printf("%d\t",array[i][u]);
                sb=sb+array[i][u];
            }
            printf("Jumlah baris ke %d:",i);
            printf("%d",sb);
            printf("\n");
        }
        for(i=1;i<=a;i++)
        {
            sk=0;
            for(u=1;u<=b;u++)
            {
                sk=sk+array[u][i];
            }
            printf("Jumlah kolom ke %d:",i);
            printf("%d",sk);
            printf("\n");
        }
    }
    return 0;
}