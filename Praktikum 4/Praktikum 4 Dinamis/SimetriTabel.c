/*Nama File : 4_SimetriTabel.c */
/*Deskripsi : Menentukan apakah kedua array yang berisi elemen integer lebih besar dari o adalah simetris atau tidak*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
//Kamus
    int i;//counter
    int u;//counter
    int *A1;//deklarasi array integer tabel 1
    int *A2;//deklarasi array integer tabel 2
    int N;//Banyak elemen tabel 1
    int M;//Banyak elemen tabel 2
    int k=0;//counter

//Algoritma
    printf("Banyaknya elemen pada tabel 1:");
    scanf("%d",&N);
    printf("Banyaknya elemen pada tabel 2:");
    scanf("%d",&M);

    A1=(int*)malloc(N*sizeof(int));
    A2=(int*)malloc(M*sizeof(int));

    for(i=0;i<N;i++)
    {
        printf("Masukkan Elemen tabel 1:");
        scanf("%d",A1+i);
    }
    for(u=0;u<M;u++)
    {
        printf("Masukkan Elemen tabel 2:");
        scanf("%d",A2+u);
    }

    if(N!=M) 
    {
        printf("Tidak Simetri");
    }
    else 
    {
        for(i=0;i<M;i++) 
        {
            if(A1[i]!=A2[i])
            {
                k=0;
            }
            else
            {
                k=k+1;
            }
        }
        if(k==M)
        {
            printf("Simetri");
        }
        else
        {
            printf("Tidak Simetri");
        }
    }
    free(A1);//Dealokasi
    free(A2);//Dealokasi
    return 0;
}