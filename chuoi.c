#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char str1[10] = "nam", str2[10] = "nu";

typedef struct HocSinh
{
    char HoTen[30];
    char Que[30];
    char GioiTinh[10];
    float DiemMua;
    float DiemHat;
    float DiemTheDuc;
    float DiemTin;
} HocSinh;
void nhap(HocSinh a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Nhap Ho Ten: ");
        gets(a[i].HoTen);
        printf("Nhap Que Quan: ");
        gets(a[i].Que);
        printf("Nhap Gioi Tinh(Nam-Nu): ");
        gets(a[i].GioiTinh);
        if (strcmp(a[i].GioiTinh, str1) == 0)
        {
            printf("nhap diem the duc: ");
            scanf("%f", &a[i].DiemTheDuc);
            printf("nhap diem tin: ");
            scanf("%f", &a[i].DiemTin);
        }
        else
        {
            printf("nhap diem mua: ");
            scanf("%f", &a[i].DiemMua);
            printf("nhap diem hat: ");
            scanf("%f", &a[i].DiemHat);
        }
    }
}
void xuat(HocSinh a[], int n)
{
    printf("Danh sach cac hoc sinh nu\n");
    printf("|STT|        Ho Ten      |    Que   |DiemHat|DiemMua|Tong |\n");
    int STT = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].GioiTinh, str2) == 0)
        {
            printf("|%03d|%20s|%10s|  %.2f | %.2f  |%.2f|\n", STT++, a[i].HoTen, a[i].Que, a[i].DiemHat, a[i].DiemMua, a[i].DiemMua + a[i].DiemHat);
        }
    }
    printf("Danh sach cac hoc sinh nam\n");
    printf("|STT|        Ho Ten      |    Que   |DiemTD |DiemTin|Tong |\n");
    STT = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].GioiTinh, str1) == 0)
        {
            printf("|%03d|%20s|%10s|  %.2f | %.2f  |%.2f|\n", STT++, a[i].HoTen, a[i].Que, a[i].DiemTheDuc, a[i].DiemTin, a[i].DiemTheDuc + a[i].DiemTin);
        }
    }
}
int main()
{
    HocSinh a[10];
    int n;
    printf("nhap so hoc sinh muon : ");
    scanf("%d", &n);
    nhap(a, n);
    xuat(a, n);
    return 0;
}
