#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
int laUoc (int x, int n)
{
    return n%x==0;
}

void lietKeUocDuong (int n)
{
    for (int i=1; i<=abs(n); i++)
    {
        if (laUoc(i,n))
            printf("%d ",i);
    }
    printf("\n");
}

int laSoNguyenTo (int n)
{
    if (n<2)
        return 0;
    for (int i=2; i<n; i++)
    {
        if (laUoc(i,n))
            return 0;
    }
    return 1;
}

void timSNTGanNhat (int n)
{
    if (laSoNguyenTo(n))
    {
        printf("%d\n",n);
        return;
    }
    int dem = 1;
    while (1)
    {
        int flag = 0;
        if (laSoNguyenTo(n+dem))
        {
            printf("%d ",n+dem);
            flag = 1;
        }
        if (laSoNguyenTo(n-dem))
        {
            printf("%d ",n-dem);
            flag = 1;
        }
        if (flag)
        {
            printf("\n");
            return;
        }

        dem++;
    }
}

void menu()
{
    printf("\t\tMENU\n");
    printf("\t1. Nhap so\n");
    printf("\t2. Liet ke uoc duong\n");
    printf("\t3. Tim SNT gan nhat\n");
    printf("\t0. Exit\n");
    printf("\t\tVui long chon: ");
}

int main()
{
    int chon, n;
    int daNhap = 0;
    while (1)
    {
        menu();
        scanf("%d",&chon);
        system("cls");
        if (chon == 0)
        {
            printf("\tBan da chon ket thuc chuong trinh");
            return 0;
        }
        else if (chon == 1)
        {
            printf("\tBan da chon nhap 1 so\n");
            printf("\tNhap so: ");  scanf("%d",&n);
            printf("\tBan vua nhap so %d\n",n);
            daNhap = 1;

        }
        else if (chon == 2)
        {
            printf("\tBan da chon liet ke uoc duong\n");
            if (daNhap)
            {
                printf("\tCac uoc duong cua so %d la: ",n);
                lietKeUocDuong(n);
            }
            else
            {
                printf("\tVui long nhap so truoc da\n");
            }

        }
        else if (chon == 3)
        {
            printf("\tBan da chon tim SNT gan nhat\n");
            if (daNhap)
            {
                printf("\tSNT gan nhat cua so %d la: ",n);
                timSNTGanNhat(n);
            }
            else
            {
                printf("\tVui long nhap so truoc da\n");
            }
        }
        else
        {
            printf("\tVui long chi chon tu 0 den 3\n");
        }
        printf("\tBam phim bat ky de ve menu");
        getch();
        system("cls");
    }
}
