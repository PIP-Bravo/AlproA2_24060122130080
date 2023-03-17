/*Nama File : 1_NilMax2Tabel.c */
/*Deskripsi : Menghitung dan menampilkan data terbesar kedua dari elemen tabel yang diinputkan, dimana elemen berupa bilangan enteger lebih besar dari nol*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */
#include <stdio.h>
#include <stdlib.h>

int main() 
{
//Kamus
    int input=10;//Banyaknya data yang akan diinput pada array
    int pip[10]= {7,4,5,7,6,5,3,5,1,4};//Deklarasi array integer
    int max1=0;//data terbesar
    int max2=0;//data terbesar kedua
    int i;//counter
    int u;//counter

//Algortima
    for (u=0;u<input;u++) 
    {
        if (pip[u]>max1)
        {
            max2 = max1;
            max1 = pip[u];
        }
        else if(pip[u]>=max2 && pip[u]<max1)
        {
            max2=pip[u];
        }
    }
    printf("%d",max2);
    return 0;
}
