#include<stdio.h>
#include<stdlib.h>
int giaithua(int n)
{
    int gt=1;
    for(int i=1;i<=n;i++)
        gt=gt*i;
    return gt;
}
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("%d!= %d",n,giaithua(n));
}
