#include <stdio.h>
#include <math.h>
#define MAX 100

void nhapmang (int arr[], int n)
{
    for (int i=0; i<n;i++)
        scanf("%d",&arr[i]);
}
void xuatmang (int arr[], int n)
{
    for (int i=0; i<n;i++)
        printf("%5d",arr[i]);
        printf("\n");
}
//Insertion Sort
void insertionSort(int arr[], int n)
{
    int i, k, j;
    for (i = 1; i < n; i++)
   {
       k = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > k)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = k;
   }
}
int main()
{
    int n=0;  scanf("%d",&n);
    int arr[MAX];
    nhapmang(arr,n);
    xuatmang(arr,n);
    insertionSort(arr,n);
    // printf("Day so da sap xep: \n");
    xuatmang(arr, n);

    return 0;
}
