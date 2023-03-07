/*Nama File : 5_BilPrimaN.c */
/*Deskripsi : Mencetak bilangan prima sampai dengan batas bilangan integer N (N>0)*/
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
    printf("Batas untuk Bilangan Prima yang ingin anda cetak:");
    scanf("%d", &N);

    for(U=1;U<=N;U++) {
        K=0;
        for(i=1; i<=U; i++) {
            if(U%i==0) {
            K=K+1;
            }
        }
        if(K==2) {
            printf("%d, ", U);  
        } 
    }
}