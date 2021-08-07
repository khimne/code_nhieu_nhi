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
void menu()
{
    printf("\t\tMENU\n");
    printf("\t1. Nhap 2 day so nguyen theo chieu tang dan \n");
    printf("\t2. Ghep 2 day so  \n");
    printf("\t3. In 3 day so \n");
    printf("\t4. Ket thuc  \n");
    printf("\t----------------------------\n");
    printf("\tVui long chon: ");
}
int main ()
{
    int chon;
    int n1=0,n2=0;
    int a[MAX],b[MAX],c[MAX];
    while(1)
    {
        menu();
        scanf("%d", &chon);

        switch(chon)
        {
            case 1:
            printf("Nhap vao so luong pt mang 1: "); scanf("%d",&n1);
               nhapmang(a,n1);
            printf("Nhap vao so luong pt mang 2: "); scanf("%d",&n2);
               nhapmang(b,n2);
                break;
            case 2:
               tronMang(a,b,c,n1,n2);
                break;
            case 3:
               xuatmang(a,n1);  printf("\n");
               xuatmang(b,n2);  printf("\n");
               xuatmang(c,n1+n2);  printf("\n");
                break;
            case 4: exit(4);
            default: printf("Vui long nhap tu 0 - 4\n ");
        }
        printf("\nBam phim bat ky de ve menu\n");
        getch();
        system("cls");
    }
    return 0;
}
