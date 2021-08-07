#include<stdio.h>
#define MAX 100
void nhap(int a[],int n)
{
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void xuat(int a[],int n)
{
    for(int  i=0;i<n;i++)
        printf("%d",&a[i]);
        printf("\n");
}
int max(int a[],int n)
{
    int max=a[0];
    for(int i=0;i<n;i++)
        if(max<a[i])
        max=a[i];
    return max;
}
int min(int a[],int n)
{
    int min=a[0];
    for(int i=0;i<n;i++)
        if(min>a[i])
        min=a[i];
    return min;
}
int main()
{
    int a[MAX],n;
    scanf("%d",&n);
    nhap(a,n);
    printf("Gia tri lon nhat cua mang la %d tai vi tri: ",max(a,n));
    for(int i=0;i<n;i++)
        if(a[i]==max(a,n))
            printf("%d",i+1);
    printf("\n");

    printf("Gia tri nho nhat cua mang la %d tai vi tri: ",min(a,n));
    for(int i=0;i<n;i++)
        if(a[i]==min(a,n))
            printf("%d",i+1);
        printf("\n");
     return 0;

}
