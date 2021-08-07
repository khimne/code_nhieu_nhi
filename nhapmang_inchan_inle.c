#include<stdio.h>

int main()
{
    int n;
    printf("Nhap so phan tu trong mang : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nMang truoc khi sap xep la:\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for (int j=i; j<n; j++)
        {
            if (a[j]%2==0)
            {
                int k = a[i];
                a[i]=a[j];
                a[j]=k;
                break;
            }
        }
    }
    printf("\nMang sau khi sap xep la:\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
}
