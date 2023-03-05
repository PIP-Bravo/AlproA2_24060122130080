/*Nama File : 4_CekBilSemp.c */
/*Deskripsi : Menentukan apakah sebuah bilangan integer positif N(N>0) adalah bilangan sempurna atau bukan*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include<stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int N;
    int tf =0;

    printf("Masukkan Bilangan yang ingin anda cek:");
    scanf("%d", &N);


    for(i=1; i<=N; i=i+1) {
        if(N%i==0 && N!=i) {
            tf=tf+i;
        }
    }
    if(tf==N){
        printf("Bilangan Sempurna");
    }else {
        printf("Bukan Bilangan Sempurna");
    }
}