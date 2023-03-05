/*Nama File : 3_CekBilPrima.c */
/*Deskripsi : Menentukan apakah sebuah bilangan integer N(N>0) adalah bilangan prima atau bukan*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include<stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int N;
    int jf=0;

    printf("Masukkan Bilangan yang ingin anda cek:");
    scanf("%d", &N);


    for(i=1; i<=N; i=i+1) {
        if(N%i==0) {
            jf=jf+1;
        }
    }
    if(jf==2){
        printf("Bilangan Prima");
    }else {
        printf("Bukan Bilangan Prima");
    }
}