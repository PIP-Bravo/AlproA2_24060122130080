/*Nama File : 1_SortDescendStatis.c */
/*Deskripsi : Mengurutkan menggunakan teknik Selection secara Descending*/
/* Pembuat  : Alfonso Clement Sutantio - 24060122130080 */
#include <stdio.h>

int main(){
//Kamus Lokal
    int i;//counter
    int j;//counter
    int temp;//variabel sementara
    int N=7;//jumlah elemen tabel 
    int a[7]={8,5,4,3,2,9,12};//array of integer

//Algoritma
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Maka data yang telah diurutkan adalah:\n");
    for (i=0;i<N;i++)
    {
        printf("%d, ",a[i]);
    }

}