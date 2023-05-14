/*Nama File : 1_SortDescendDinamis.c */
/*Deskripsi : Mengurutkan menggunakan teknik Selection secara Descending*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus lokal
    int i;//counter
    int j;//counter
    int temp;//variabel sementara
    int N;//Banyak Elemen Array
    int *Tabel;//Array of integer

//Algoritma

    printf("Masukkan banyaknya elemen tabel :");
    scanf("%d",&N);//Input banyaknya elemen tabel

    Tabel=(int*)malloc(N*sizeof(int));//Deklarasi pembuatan Tabel dengan muatan tampung elemen sebanyak N

    for(i=0;i<N;i++)//Loop untuk mengisikan elemen elemen Tabel 
    {
        printf("Masukkan Bilangan :");
        scanf("%d",Tabel+i);
    }

    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(Tabel[i]<Tabel[j])
            {
                temp=Tabel[i];
                Tabel[i]=Tabel[j];
                Tabel[j]=temp;
            }
        }
    }
    printf("Maka data yang telah diurutkan adalah:\n");
    for (i=0;i<N;i++)
    {
        printf("%d, ",Tabel[i]);
    }
}