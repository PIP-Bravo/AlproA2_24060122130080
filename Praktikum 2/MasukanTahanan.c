/*Nama File : 4_MasukanTahanan.c */
/*Deskripsi : Menampilkan total dari 3 tahanan yang diinputkan */
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include <stdio.h>
#include <stdlib.h>

//Kamus
int main()
{
    int th1;
    int th2;
    int th3;
    
//Algoritma
    printf("Masukkan tahanan 1 :");
    scanf("%d",&th1);

    printf("Masukkan tahanan 2 :");
    scanf("%d",&th2);

    printf("Masukkan tahanan 3 :");
    scanf("%d",&th3);

    if(th1>=0 && th2>=0 && th3>=0) {
        printf("%d",th1 + th2 + th3);
    }else {
        printf("\nMasukan tahanan tidak boleh negatif");
    }
                return 0;
}
