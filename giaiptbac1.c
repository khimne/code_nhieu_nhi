#include<stdio.h>
int main ()
{
    int a,b;
    float x;
    printf("nhap 2 so :");
    scanf("%d%d",&a,&b);
    if (a==0)
    {
       if (b==0)
        printf(" phuong trinh vo so nghiem ");
       else
        printf(" phuong trinh vo nghiem ");
    }
    else
        x=(float)-b/a;
        printf("nghiem cua phuong trinh la %f",x);
}
