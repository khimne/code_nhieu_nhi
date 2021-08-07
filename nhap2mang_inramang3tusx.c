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
void tangdan(int arr[], int n)
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

void tronMang(int a[MAX],int b[MAX],int c[MAX],int n1, int n2)
{
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2) {
            c[k++] = a[i]<b[j]?a[i++]:b[j++];
    }
    while(i<n1)
    {
        c[k++]=a[i];
            i++;
    }
    while(j<n2)
    {
        c[k++]=b[j];
            j++;
    }
}
int main()
{
    int n1=0;
    int n2=0;
    printf("Nhap vao so luong pt mang 1: "); scanf("%d",&n1);
    int a[MAX]; int b[MAX]; int c[MAX];
    nhapmang(a,n1);
    //xuatmang(arr,n);
    tangdan(a,n1); printf("Mang 1 sau khi sap xep tang dan : ");
    xuatmang(a,n1);  printf("\n");
    printf("Nhap vao so luong pt mang 2: "); scanf("%d",&n2);
    nhapmang(b,n2);
    tangdan(b,n2); printf("Mang 2 sau khi sap xep tang dan : ");
    xuatmang(b,n2);  printf("\n");
    tronMang(a,b,c,n1,n2);
    printf("Mang sau khi tron va sap xep tang dan : ");
    xuatmang(c,n1+n2);
    return 0;
}
