/*Nama File : 1_BilanganInteger.c */
/*Deskripsi : Menentukan suatu inputan i apakah termasuk bilangan bulat (positif, negatif, atau nol) atau bukan termasuk sebuah bilangan*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    printf("Masukkan Nilai i :");
    scanf("%d",&i);

    if(i== 0) {
        if (i > 0) {
            printf("Positif");
        } else {
            printf("Negatif");
        printf("nol");
    }}else {
        printf("\nBukan termasuk sebuah bilangan");
    }
return 0;
}