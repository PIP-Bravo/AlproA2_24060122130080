/*Nama File : 6_KalkulatorSuper.c */
/*Deskripsi : Membuat kalkulator yang berfungsi menghitung dua inputan yang diberikan dengan operator yang dipilih oleh user*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//kamus
int main()
{
    int iA;
    int iB;
    char jenis;
    
//Algoritma
    printf("Jenis operasi apa yang anda ingin lakukan (a-f):");
    scanf("%c",&jenis);

    printf("Masukkan besaran bilangan bulat pertama :");
    scanf("%d",&iA);

    printf("Masukkan besaran bilangan bulat kedua :");
    scanf("%d",&iB);

    

    if((jenis=='a')||(jenis=='b')||(jenis=='c')||(jenis=='d')||(jenis=='e')||(jenis=='f')) {
        if(jenis=='a') {
            printf("%d",iA + iB);
        }else if(jenis=='b') {
            printf("%d",iA - iB);
        }else if(jenis=='c') {
            printf("%d",iA * iB);
        }else if(jenis=='d') {
            printf("%f",(float)iA / iB);
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
