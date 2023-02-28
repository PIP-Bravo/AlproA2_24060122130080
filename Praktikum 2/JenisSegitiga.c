/*Nama File : 5_JenisSegitiga.c */
/*Deskripsi : Menentukan jenis segitiga dari besaran sisi yang diinputkan*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1;
    int s2;
    int s3;

    printf("Masukkan besar sisi 1 :");
    scanf("%d",&s1);

    printf("Masukkan besar sisi 2 :");
    scanf("%d",&s2);

    printf("Masukkan besar sisi 3 :");
    scanf("%d",&s3);

    if(s1>0 && s2>0 && s3>0) {
        if(s1==s2 && s2==s3 && s1==s3) {
            printf("Segitiga Sama Sisi");
        }if((s1==s2 && s2!=s3 && s1!=s3)||(s1!=s2 && s2==s3 && s1!=s3)||(s1!=s2 && s2!=s3 && s1==s3)) {
            printf("Segitiga Sama Kaki");
        }if(s1!=s2 && s2!=s3 && s1!=s3) {
            printf("Segitiga Sembarang");
        }
    }else {
        printf("\nTerdapat nilai yang bukan sisi segitiga");
    }
                return 0;
}