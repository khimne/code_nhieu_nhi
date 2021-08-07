#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 100

FILE *f;
char* fileketqua="ketqua.txt";
typedef struct
{
    char maSV[10];
    char ht[25];
    int namsinh;
} sinhvien;
sinhvien nhapSinhVien ()
{
    sinhvien sv;
    printf("\tMa sinh vien: ");
    fflush(stdin);
    gets(sv.maSV);
    printf("\tHo ten: ");
    fflush(stdin);
    gets(sv.ht);
    printf("\tNam sinh: ");
    scanf("%d",&sv.namsinh);
    return sv;
}
void hienThiDanhSachSinhVien (sinhvien dssv[], int n)
{
    printf("\t\tDANH SACH SINH VIEN\n");
    printf("\t%5s%10s%25s%9s\n","STT", "Ma SV", "Ho ten", "Nam sinh");
    int stt = 1;
    for (int i=0; i<n; i++)
    {
        printf("\t%5d%10s%25s%9d\n",stt,dssv[i].maSV,dssv[i].ht,dssv[i].namsinh);
        stt++;
    }
}
void menu()
{
    printf("\t\tMENU\n");
    printf("\t1. Tao danh sach\n");
    printf("\t2. Hien danh sach\n");
    printf("\t3. Sua thong tin sinh vien\n");
    printf("\t4. them sv \n");
    printf("\t5. ket thuc\n");
    printf("\t\tVui long chon: ");
}
//Nhập danh sách lên tệp
void nhapDanhSachLenTep (int stt)
{
    //Mở file
    f = fopen(fileketqua,"wb");
    //Xử lí file
    stt = 1;
    while (1)
    {
        printf("\tNhap sinh vien thu %d\n",stt);
       sinhvien sv = nhapSinhVien();
        fwrite(&sv,sizeof(sinhvien),1,f);
        stt++;
        printf("\tNhap tiep? (y/n): ");
        char chon;
        fflush(stdin);
        chon = getchar();
        if (chon=='n' || chon=='N')
            break;
    }
    //Đóng file
    fclose(f);
}
void luuDanhSachLenTep (sinhvien dssv[], int n)
{
    //Mở file
    f = fopen(fileketqua,"wb");

    //Xử lí file
    for (int i=0; i<n; i++)
    {
        fwrite(&dssv[i],sizeof(sinhvien),1,f);
    }
    //Đóng file
    fclose(f);
}
//Đọc danh sách từ tệp, lưu vào mảng dssv và giả về số lượng phần tử
int docDanhSachTrenTep (sinhvien dssv[])
{
    //Mở file
    f = fopen(fileketqua, "rb");
    //Xử lí file
    int i = 0;
    while( fread(&dssv[i], sizeof(sinhvien),1,f) > 0)
    {
        i++;
    }
    //Đóng file
    fclose(f);
    return i;
}

//Tìm sinh viên theo tên, giả về chỉ số trong mảng
int timSinhVienTheoMaSV (sinhvien dssv[], int n, char maSVCanTim[])
{
    for (int i=0; i<n; i++)
    {
        if (strcmp(dssv[i].maSV,maSVCanTim)==0)
        {
            return i;
        }
    }
    return -1;
}
//Sửa thông tin sinh viên thứ i
void suaThongTinSinhVien (sinhvien dssv[], int i)
{
    dssv[i] = nhapSinhVien();
}
void themsv()
{
    sinhvien sv=nhapSinhVien();
    f=fopen(fileketqua,"ab");
    fwrite(&sv,sizeof(sinhvien),1,f);
    fclose(f);
}

int main ()
{
    sinhvien dssv[100];
    int n = 0;
    int stt;
    char chontiep;
    while (1)
    {
        system("cls");
        menu();
        int chon;   scanf("%d",&chon);
        switch(chon)
        {
        case 1:
            printf("\tBan da chon tao danh sach\n");
            nhapDanhSachLenTep(&stt);
            break;
        case 2:
            n = docDanhSachTrenTep(dssv);
            hienThiDanhSachSinhVien(dssv,n);
            break;
        case 3:
            n = docDanhSachTrenTep(dssv);
            printf("\tNhap ma sinh vien can tim: ");
            char maSVCanTim[10];
            fflush(stdin);
            gets(maSVCanTim);
            if (timSinhVienTheoMaSV(dssv,n,maSVCanTim)<0)
            {
                printf("\tKhong tim thay ma sinh vien %s\n",maSVCanTim);
            }
            else
            {
                printf("\tNhap lai thong tin sinh vien nay\n");
                suaThongTinSinhVien(dssv,timSinhVienTheoMaSV(dssv,n,maSVCanTim));
                luuDanhSachLenTep(dssv,n);
            }
            break;
        case 4:
            system("cls");
            fflush(stdin);
            while(1)
            {
                themsv();
                printf("\tNhap tiep? y/n ");
                fflush(stdin);
                chontiep = getchar();
                if (chontiep == 'n'||chontiep == 'N')
                    break;
            }
            break;
        case 5:
        {
            printf("\tBYE");
            return 0;
        }
        default:
        {
            printf("\tChi chon 1-4\n");
        }
        }
        printf("\tBam nut bat ky de ve menu\n");
        getch();
    }
    return 0;
}
