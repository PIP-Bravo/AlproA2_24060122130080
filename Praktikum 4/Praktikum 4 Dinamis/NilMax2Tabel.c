/*Nama File : 1_NilMax2Tabel.c */
/*Deskripsi : Menghitung dan menampilkan data terbesar kedua dari elemen tabel yang diinputkan, dimana elemen berupa bilangan enteger lebih besar dari nol*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */
#include <stdio.h>
#include <stdlib.h>

int main() 
{
//Kamus
    int input;//Banyaknya data yang akan diinputkan pada array
    int *pip;//deklarasi array integer
    int max1;//data terbesar
    int max2;//data terbesar kedua
    int i;//counter
    int u;//counter

//Algortima
    printf("Masukkan banyaknya inputan yang akan dibuat :");
    scanf("%d",&input);

    pip=(int*)malloc(input*sizeof(int));

    for(i=0;i<input;i++) {
        printf("Masukkan Bilangan :");
        scanf("%d",pip+i);
    }
    if((pip[0])>(pip[1]))
    {
        max1=pip[0];
        max2=pip[1];
    }
    else
    {
        max1=pip[1];
        max2=pip[0];
    }
    
    for (u=2;u<=input;u++) 
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
    free(pip);//Dealokasi
    return 0;
}
