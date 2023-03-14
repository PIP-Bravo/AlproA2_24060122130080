/*Nama File : 6_BilSempN.c */
/*Deskripsi : Mencetak bilangan sempurna sampai dengan batas bilangan integer N (N>0)*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include<stdio.h>
#include <stdlib.h>

int main() {

//Kamus
    int i;
    int U;
    int N;
    int K;

//Algoritma
    printf("Masukkan Bilangan yang ingin anda cek:");
    scanf("%d", &N);

if(N>0)
{
    for(U=1;U<=N;U++) {
        K=0;
        for(i=1; i<U; i++) {
            if(U%i==0) {
            K=K+i;
            }
        }
        if(U==K) {
            printf("%d, ", U);  
        } 
    }
}
else {
    printf("Bilangan N harus positif:");
}
}