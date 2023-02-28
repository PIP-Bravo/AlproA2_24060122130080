/*Nama File : 6_KalkulatorSuper.c */
/*Deskripsi : Membuat kalkulator yang berfungsi menghitung dua inputan yang diberikan dengan operator yang dipilih oleh user*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int iA;
    int iB;
    char jenis;


    printf("Masukkan besaran bilangan bulat pertama :");
    scanf("%d",&iA);

    printf("Masukkan besaran bilangan bulat kedua dan Jenis operasi apa yang anda ingin lakukan (a-f) :");
    scanf("%d %c",&iB,&jenis);

    if((jenis=='a')||(jenis=='b')||(jenis=='c')||(jenis=='d')||(jenis=='e')||(jenis=='f')) {
        if(jenis=='a') {
            printf("%d",iA + iB);
        }else if(jenis=='b') {
            printf("%d",iA - iB);
        }else if(jenis=='c') {
            printf("%d",iA * iB);
        }else if(jenis=='d') {
            printf("%.2f",(float)iA / iB);
        }else if(jenis=='e') {
            printf("%d",iA / iB);
        }else if(jenis=='f') {
            printf("%d",iA % iB);
        }
    }else {
        printf("\nBukan pilihan menu yang benar");
    }
                return 0;
}