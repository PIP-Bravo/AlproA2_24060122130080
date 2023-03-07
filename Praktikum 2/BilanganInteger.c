/*Nama File : 1_BilanganInteger.c */
/*Deskripsi : Menentukan suatu inputan i apakah termasuk bilangan bulat (positif, negatif, atau nol) atau bukan termasuk sebuah bilangan*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
//Kamus
    int i;

//Algoritma
    printf("Masukkan Nilai i :");

    if (scanf("%d",&i)) {
        if(i > 0) {
            printf("Positif");
        }else if(i<0) {
            printf("Negatif");
        }else if(i==0) {
            printf("nol");
        }
    }else {
        printf("\nBukan termasuk sebuah bilangan");
    }
        
            return 0;
}
