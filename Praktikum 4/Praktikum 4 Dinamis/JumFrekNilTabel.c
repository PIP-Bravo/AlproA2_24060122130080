/*Nama File : 3_JumFrekNilTabel.c */
/*Deskripsi : Menampilkan jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari 1 dan elemennya berupa bilangan integer lebih besar dari nol*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */
#include <stdio.h>
#include <stdlib.h>

int main() 
{
//Kamus
    int input;//Banyak data yang akan diinput pada array
    int *pip;//deklarasi array integer
    int c;//counter
    int i;//counter
    int u;//counter
    int sum=0;//Jumlah elemen tabel

//Algoritma
    printf("Masukkan banyaknya inputan yang akan dibuat :");
    scanf("%d",&input);

    pip=(int*)malloc(input*sizeof(int));

    for(i=0;i<input;i++) 
    {
        printf("Masukkan Bilangan :");
        scanf("%d",pip+i);
    }

    printf("\nElemen tabel T yang frekuensi kemunculannya lebih dari satu kali adalah ");
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
            sum=sum+(c*pip[i]);
        }
        }
    }
    printf("\n\nJumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali adalah %d",sum);
    free(pip);//Dealokasi
    return 0;
}
