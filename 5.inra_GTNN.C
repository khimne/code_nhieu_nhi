#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 100
    void nhap(int a[], int n)
    {
        for (int i=0;i<n;i++)
        {
            printf("\nNhap vao phan tu a[%d] :", i);
            scanf("%d", &a);
        }
    }
    int min (int a[], int n)
    {
        int min=a[0];
        for (int i=1;i<n;i++)
            min=a[i]<min?a[i]:min;
        return min;
    }

int main(){
    int a[100];
    int n;
    printf("\nNhap n= ");
    scanf("%d",&n);
    nhap(a,n);
    printf("\nMin=%d ",min(a,n));
    return 0;
}

