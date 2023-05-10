/*Nama File : 1_SelectionSortDescend.c */
/*Deskripsi : Mengurutkan menggunakan teknik Selection secara Descending*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */
#include <stdio.h>

int main()
{
//Kamus lokal
    int a[] = {5,9,7,6,4,0,2,3,8,1};//Array of integer
    int N =10;//Banyak Elemen Array

//Algoritma
    for (int i=0;i<N - 1;i++)
    {
        int min=i;
        for (int u=i+1;u<N;u++)
        {
            if (a[u]<a[min])
            {
                min=u;
            }
        }
        if(min!=i)
        {
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }

    for (int i=(N-1);i>=0;i--)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}