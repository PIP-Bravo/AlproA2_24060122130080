/*Nama File : 1_SortAscendDinamis.c */
/*Deskripsi : Mengurutkan menggunakan teknik Insertion secara Ascending*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus lokal
    int i;
    int u;
    int X;
    int N;
    int *Tabel;
//Algoritma
    printf("Masukkan banyaknya elemen tabel :");
    scanf("%d",&N);//Input banyaknya elemen tabel

    Tabel=(int*)malloc(N*sizeof(int));//Deklarasi pembuatan Tabel dengan muatan tampung elemen sebanyak N

    for(i=0;i<N;i++)//Loop untuk mengisikan elemen elemen Tabel 
    {
        printf("Masukkan Bilangan :");
        scanf("%d",Tabel+i);
    }

    for (i=1; i<N;i++)
    {
        X = Tabel[i];
        u = i-1;

        while (u >=0 && Tabel[u]>X)
        {
            Tabel[u+1]=Tabel[u];
            u=u-1;

        }
        Tabel[u+1]=X;
    }


    for (i=0;i<N;i++)
    {
        printf("a[%d] = %d\n", i, Tabel[i]);
    }
    
}
