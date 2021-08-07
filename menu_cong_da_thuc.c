#include <stdio.h>
#define MAX 100
void menu ()
{
    printf("\t\t\tMENU\n");
    printf("\t1. Nhap he so 2 da thuc \n");
    printf("\t2. Tinh he so da thuc tong\n");
    printf("\t3. In he so cua 3 da thuc\n");
    printf("\t4. In gia tri cua 3 da thuc\n");
    printf("\t5. Ket thuc \n");
    printf("\t\t\tVui long chon\n");
}
void nhap (int *a, int *n)
{
    *n=-1;
    while(*n<0)
    {
        printf("Nhap bac cua da thuc > 0 :");
        scanf("%d",n);
    }
    printf("\tNhap tung he so\n ");
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
   int i;
    if(n1!=n2)
    {
         *k=n1<n2?n2:n1;
            for (int i=0; i<=*k; i++)
            {
                a_sum[i]=a1[i]+a2[i];
            }
    }
    else
        a_sum[i]=a1[i]+a2[i];
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
     while(1)
    {
        menu();
        int chon; scanf("%d",&chon);
        system("cls");
        switch(chon)
        {
        case 1:
            khoitao(a1,MAX);
            khoitao(a2,MAX);
            printf("Thong tin da thuc Px\n");
            nhap(a1,&n1);

            printf("Thong tin da thuc Qx\n");
            nhap(a2,&n2);
            break ;
        case 2:
            tong(a1,a2,a_sum,n1,n2,&k);
            break;
        case 3:
            printf("He so da thuc P :");
                xuat(a1,n1);
            printf("\nHe so da thuc Q :");
                xuat(a2,n2);
            printf("\nHe so da thuc T :");
                xuat(a_sum,k);
            break;
        case 4:
            printf("Nhap gia tri cua x: ");
            scanf("%d",&x);
            printf("Gia tri cua P: %d\n",giaTriDaThuc(a1,n1,x));
            printf("Gia tri cua Q: %d\n",giaTriDaThuc(a2,n2,x));
            printf("Gia tri cua T: %d\n",giaTriDaThuc(a_sum,k,x));
            break;
            case 5: exit(0);
            default: printf("Nhap tu 0-5\n");
        }
        printf("Nhan phim bat ki de ve menu\n");
        getch(); system("cls");
    }
    return 0;
}
