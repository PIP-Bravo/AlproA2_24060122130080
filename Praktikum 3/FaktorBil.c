/*Nama File : 2_FaktorBil.c */
/*Deskripsi : Menentukan faktor dari sebuah bilangan integer positif N(N>0)*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include<stdio.h>
#include <stdlib.h>

int main() {

//Kamus
    int i;
    int N;

//Algoritma
    printf("Masukkan Bilangan yang ingin anda cari faktornya:");
    scanf("%d", &N);

if(N>0)
{
    for(i=1; i<=N; i=i+1) {
        if(N%i==0) {
            if(i<N) {
                printf("%d, ", i);
            }else {
                printf("%d", i);
            } 
        }
    }
}
else {
    printf("Bilangan N harus positif:");
}
}