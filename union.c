//Dùng struct và union để nhập vào danh sách các học sinh của một lớp
//Trong đó các thành phần chung: họ tên, quê, giới tính, tổng_điểm
//Các thành phần riêng ứng vs giới tính là :
//Nữ: Điểm hát, điểm múa
//Nam: Điểm thể dục, điểm tin
//Nhập dữ liệu các hs. In ra danh sách học sinh theo dạng:
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
char str1[5] = "nam", str2[5] = "nu";
typedef struct hoten {
    char ho[10], dem[10], ten[10];
    }hoten;
typedef struct quequan{
    char xa[10], huyen[10], tinh[10];
    } quequan;
typedef struct sinhvien{
       hoten ht;
       quequan qq;
       char gioitinh[10];
       float mua,hat,tin,theduc;
       // diem_thi diem;
    }sinhvien;
void nhap(struct sinhvien *sv,int n ){
        for (int i=0; i<n; i++){
        fflush(stdin);
        printf("Nhap Ho: ");
        gets(sv->ht.ho);
        printf("Nhap ten Dem:");
        gets(sv->ht.dem);
        printf("Nhap Ten:");
        gets(sv->ht.ten);
        printf("Xa:");
        gets(sv->qq.xa);
        printf("Huyen:");
        gets(sv->qq.huyen);
        printf("Tinh:");
        gets(sv->qq.tinh);
        printf("Gioi Tinh:");
        gets(sv->gioitinh);
        if (strcmp(sv[i].gioitinh, str1) == 0)
        {
            printf("nhap diem the duc: ");
            scanf("%f", &sv[i].theduc);
            printf("nhap diem tin: ");
            scanf("%f", &sv[i].tin);
        }
        else
        {
            printf("nhap diem mua: ");
            scanf("%f", &sv[i].mua);
            printf("nhap diem tin: ");
            scanf("%f", &sv[i].hat);
        }
        fflush(stdin);
    }
}


void xuat (struct sinhvien* sv, int n)
{
	printf("\t\tDANH SACH HOC SINH NAM\n");
	printf("\t%5s|%20s|%8s|%8s|%8s|%8s\n","STT", "Ho ten","Que","Diem tin","Diem the duc","Tong");
	int STT = 0;
	for (int i=0;i<n;i++){
        if (strcmp(sv[i].gioitinh, str1) == 0) {
            printf("|%03d|%10s|%10s|%10s|%10s|%10s|%10s|  %.2f | %.2f  |%.2f|\n",STT++,sv[i].ht.ho,sv[i].ht.dem,sv[i].ht.ten,sv[i].tin,sv[i].theduc,(sv[i].tin+sv[i].theduc));
        }
	}

    printf("\t\tDANH SACH HOC SINH NU\n");
	printf("\t%5s|%20s|%8s|%8s|%8s|%8s\n","STT", "Ho ten","Que","Diem mua","Diem hat","Tong");
	for (int i=0;i<n;i++){
        if (strcmp(sv[i].gioitinh, str2) == 0) {
            printf("|%03d|%10s|%10s|%10s|%10s|%10s|%10s|  %.2f | %.2f  |%.2f|\n",STT++,sv[i].ht.ho,sv[i].ht.dem,sv[i].ht.ten,sv[i].mua,sv[i].hat,(sv[i].mua+sv[i].hat));
        }
	}
}

int main()
   {
    sinhvien sv[10];
    int n;
    printf("nhap so hoc sinh: ");
    scanf("%d", &n);
    nhap(sv, n);
    xuat(sv, n);
    return 0;
}




