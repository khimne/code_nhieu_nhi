#include <stdio.h>
#include <math.h>
#define MAX 100

void nhapmang (int arr[], int n) // ( mảng và số liệu ptu)
{
    for (int i=0; i<n;i++)
        scanf("%d",&arr[i]);
}
void xuatmang (int arr[], int n) // ( mảng và số liệu ptu)
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


#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#include<time.h>
void nhapmang (float a[], int n) // ( mảng và số liệu ptu)
{
    for (int i=0; i<n;i++)
        scanf("%f",&a[i]);
}
void xuatmang (float a[], int n) // ( mảng và số liệu ptu)
{
    for (int i=0; i<n;i++)
        printf("%f",a[i]);
}


float getMax(float a[],int n)
{
   float  i_max=a[0];
    for (int i=0; i<n;i++)
    {
        if (i_max<a[i])
        {
            i_max=a[i];
        }
    }
    return i_max;
}
float getMin(float a[],int n)
{
    float  i_min=a[0];
    for (int i=0; i<n;i++)
    {
        if (i_min>a[i])
        {
            i_min=a[i];
        }
    }
    return i_min;
}
int main ()
{

    int n; scanf("%d",&n);
    // <KDL> tên_mảng[tổng_số_pt];
    float  a[MAX];
    nhapmang(a,n);
    printf("Min = %0.3f\n",getMin(a,n));
    printf("Max = %0.3f",getMax(a,n));
    return 0;
}


#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#include<time.h>

void nhapMatrix (int a[][MAX],int d,int c)
{
    for(int i=0;i<d;i++)
    {
        for (int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
}

void sinhMatrixZigzagnang(int a[][MAX], int d, int c)
{
    int k=1;
    for(int i=0;i<d;i++)
    {
        if(i%2==0)
        {
              for (int j=0;j<c;j++)
              {
                  a[i][j]=k;
                  k++;
              }
        }
        else
        {
            for(int j=c-1;j>=0;j--)
            {
                a[i][j]=k;
                k++;
            }
        }
    }
}


int main ()
{

    int d,c; scanf("%d%d",&d,&c);
    // <KDL> tên_mảng[tổng_số_pt];
    int a[MAX][MAX];
    nhapMatrix(a,d,c);
    sinhMatrixZigzagnang(a,d,c);
    return 0;
}
