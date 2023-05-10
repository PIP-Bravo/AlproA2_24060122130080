/*Nama File : 1_InsertionSortAscend.c */
/*Deskripsi : Mengurutkan menggunakan teknik Insertion secara Ascending*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */
#include <stdio.h>

void insertion_sort(int a[], int N);

int main()
{
//Kamus lokal
    int N=8;
    int a[] = {8,4,9,5,7,6,3,2};
//Algoritma
    insertion_sort(a,N);
    for (int i=0;i<N;i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    
}

void insertion_sort(int a[], int N)
{
    for (int i=1; i<N;i++)
    {
        int X = a[i];
        int u = i-1;

        while (u >=0 && a[u]>X)
        {
            a[u+1]=a[u];
            u=u-1;

        }
        a[u+1]=X;
    }
}