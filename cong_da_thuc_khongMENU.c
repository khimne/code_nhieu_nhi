#include <stdio.h>
#define MAX 100

void nhap (int *a, int *n)
{
    *n=-1;
    while(*n<0)
    {
        printf("Nhap bac cua da thuc > 0 :");
        scanf("%d",n);
    }
    printf("\tNhap tung he so\n");
    for (int i=0; i<=*n; i++)
       {
        printf("he so x^%d: ",i);
        scanf(" %d",&a[i]);
       }
}
void khoitao (int *a, int n)
{
    int i;
    for (i=0; i<n; i++)
        a[i] = 0;
}

void xuat (int *a, int n)
{
    int i;
    for(i=n;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}

void tong(int *a1, int *a2, int *a_sum, int n1, int n2,int *k)
{
         *k=n1<n2?n2:n1;
            for (int i=0; i<=*k; i++)
            {
                a_sum[i]=a1[i]+a2[i];
            }
}

int giaTriDaThuc (int a[], int n, int x)
{
    int S=0;
    for (int i=0;i<=n;i++)
    {
        S+=a[i]*pow(x,i);
    }
    return S;
}

int main()
{
    int a1[MAX],a2[MAX],a_sum[MAX],a[MAX];
    int n,n1,n2,k,x;

    khoitao(a1,MAX);
    khoitao(a2,MAX);
    printf("Thong tin da thuc Px\n");
    nhap(a1,&n1);

    printf("Thong tin da thuc Qx\n");
    nhap(a2,&n2);

    tong(a1,a2,a_sum,n1,n2,&k);

    printf("S(x)=");
    xuat(a_sum,k);

    printf("Nhap gia tri cua x: ");
    scanf("%d",&x);
    printf("Gia tri cua T: %d",giaTriDaThuc(a_sum,k,x));


return 0;
}
