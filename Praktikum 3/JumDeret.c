/*Nama File : 1_JumDeret.c */
/*Deskripsi : Menghitung dan menampilkan jumlah total deret bilangan integer positif sebanyak N (N>0)*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include<stdio.h>
#include <stdlib.h>

int main() {

//Kamus
    int i;
    int N;
    int TT = 0;

//Algoritma
    printf("Masukkan jumlah deret yang ingin anda bentuk :");
    scanf("%d", &N);

if(N>0)
{
    for(i=1; i<=N; i++) {
        TT=TT+i;
        if(i<N) {
            printf("%d + ", i);
        }else {
            printf("%d", i);
        }
        
    }
    printf("\n");
    printf("Jumlah total deret bilangan = %d\n ", TT);
}
else {
    printf("Bilangan N harus positif:");
}
}