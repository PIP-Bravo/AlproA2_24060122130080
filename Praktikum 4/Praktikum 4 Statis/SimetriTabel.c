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
    int A1[10]={7,4,5,7,6,5,3,5,1,4};//deklarasi array integer tabel 1
    int A2[10]={7,4,5,7,6,5,3,5,1,4};//deklarasi array integer tabel 2
    int N=10;//Banyak elemen tabel 1
    int M=10;//Banyak elemen tabel 2
    int k=0;//counter

//Algoritma

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
    return 0;
}