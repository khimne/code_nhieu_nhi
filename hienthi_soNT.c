#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void nhapmang (int a[],int n)
{
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int kiemtraSNT (int a)
{
    if(a<2)
        return 0;
    for (int i=2;i<=a/2; i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
int demSNT (int a[], int n)
{
    int dem=0;
    for (int i =0 ; i<n ;i++)
    {
        if(kiemtraSNT(a[i]))
            dem++;
    }
    return dem;
}

void xuatmang(int a[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d \t",a[i]);
}
int main (){
    int n;      scanf("%d",&n);
    int a[MAX];
    nhapmang(a,n);
    printf("Co %d so nguyen to ",demSNT(a,n));
    return 0;

}
