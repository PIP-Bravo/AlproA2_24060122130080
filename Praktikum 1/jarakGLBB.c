/*Nama File : 1_jarakGLBB.c */
/*Deskripsi : Menghitung dan menampilkan jarak S di layar, S=v0*t + 0.5*(a*t*t) */
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v0;
    int t;
    int a;
    int S;

    printf("Masukkan nilai v0:");
    scanf("%d",&v0);

    printf("\n");

    printf("Masukkan nilai t:");
    scanf("%d",&t);

    printf("\n");

    printf("Masukkan nilai a:");
    scanf("%d",&a);

    S=v0*t + 0.5*(a*t*t);

    printf("%d",S);

            return 0;
}
