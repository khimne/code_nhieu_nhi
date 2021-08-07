//Xd một mảng cấu trúc mà mỗi thành phần của nó có kiểu như cấu trúc bài sv
//Nhập số liệu của 20 phiếu điểm và lưu trữ vào mảng cấu trúc nói trên.
//Tìm kiếm và in ra các thí sinh có tổng số điểm ba môn lớn hơn 15.
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
typedef struct hoten {
    char ho[20];
    char dem[10];
    char ten[10];
} hoten;
typedef struct quequan {
    char xa[20];
    char huyen[20];
    char tinh[20];
} quequan;
typedef struct diem_thi {
    float toan, ly, hoa;
} diem_thi;
typedef struct sinhvien {
    hoten ht;
    quequan qq;
    diem_thi diem;
    char truong[30];
    int tuoi;
    char sbd[10];
} sinhvien;
void nhap(sinhvien *sv,int n){
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
    fflush(stdin);
    printf("Tuoi:");
    scanf("%d",&sv->tuoi);
    fflush(stdin);
    printf("So bao danh:");
    gets(sv->sbd);
    printf("Truong :");
    gets(sv->truong);
    fflush(stdin);
    printf("Nhap diem toan:");
    scanf("%0.2f",&sv->diem.toan);
    printf("Nhap diem ly:");
    fflush(stdin);
    scanf("%0.2f",&sv->diem.ly);
    printf("Nhap diem hoa:");
    fflush(stdin);
    scanf("%0.2f",&sv->diem.hoa);
    }
}
void xuat(struct sinhvien*sv, int n){
    for (int i=0;i<n;i++) {
       printf("|%10s|%10s|%10s|%10s|%10s|%10s|%5d|%5s|%10s|%0.2f |%0.2f|%0.2f",sv[i].ht.ho,sv[i].ht.dem,sv[i].ht.ten,sv[i].qq.xa,sv[i].qq.huyen,sv[i].qq.tinh,sv[i].tuoi,sv[i].sbd,sv[i].truong,sv[i].diem.toan,sv[i].diem.ly,sv[i].diem.hoa);
    }
}
int main(){
    sinhvien sv[20];
    int n;
    printf("nhap so hoc sinh: ");
    scanf("%d", &n);
    nhap(&sv,n);
    for (int i=0; i<n; i++) {
    float tong=0;
    tong=(sv[i].diem.hoa+sv[i].diem.ly+sv[i].diem.toan);
    if( tong > 15) { xuat(&sv,n);}
    }
   return 0;
}
