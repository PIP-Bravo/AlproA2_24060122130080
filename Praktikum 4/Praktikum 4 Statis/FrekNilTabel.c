/*Nama File : 2_FrekNilTabel.c */
/*Deskripsi : Menampilkan elemen yang frekuensinya lebih dari 1 dimana elemennya adalah bilangan integer lebih besar dari nol*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include <stdio.h>
#include <stdlib.h>

int main() 
{
//Kamus
    int input=10;//Banyaknya data yang akan diinput pada array
    int pip[10]= {7,4,5,7,6,5,3,5,1,4};//Deklarasi array integer
    int c;//counter
    int i;//counter
    int u;//counter

//Algoritma

    printf("Elemen tabel T yang frekuensi kemunculannya lebih dari satu kali adalah ");
    for(i=0;i<input;i++) 
    {
        c=1;
        if(pip[i]!=0)
        {
        for(u=i+1;u<input;u++) 
        {
            if(pip[i]==pip[u]) 
            {
                c++;
                pip[u]=0;
            }
        }
        if(c>1)
        {
            printf("%d,",pip[i]);
        }
        }
    }
    return 0;
}
