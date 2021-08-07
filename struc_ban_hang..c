#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 100
typedef struct {
    char ten[100];
    int dongia, soluong,thanhtien;
} mathang;
mathang nhapmathang()
{
    mathang mh;
    printf("\tTen hang: ");
    fflush(stdin);
    gets(mh.ten);

    printf("\tDon gia: ");
    scanf("%d",&mh.dongia);

    printf("\tSo luong: ");
    scanf("%d",&mh.soluong);
    mh.thanhtien=mh.dongia*mh.soluong;
    return mh;
}
void nhapdsmh(mathang ds[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\tMat hang thu %d\n",i+1);
        ds[i]=nhapmathang();
    }
}
void dsmhtheodong(mathang mh)
{
        printf("%20s%12d%10d%12d\n",mh.ten,mh.dongia,mh.soluong,mh.thanhtien);
}
int tongtien(mathang ds[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=ds[i].thanhtien;
    return sum;
}
void hienthidsmh(mathang ds[],int n)
{
    printf("\t\tDANH SACH MAT HANG\n");
    printf("\t%5s%20s%12s%10s%12s\n","STT","TEN HANG","DON GIA","SO LUONG","THANH TIEN");
       for(int i=0;i<n;i++)
    {
        printf("\t%5d",i+1);
        dsmhtheodong(ds[i]);
    }
    printf("\t%25s%34d\n","TONG TIEN",tongtien(ds,n));
}
void luudslenFILE(mathang ds[],int n)
{
    FILE*f=fopen("SO_LIEU.C","wb");
    for(int i=0;i<n;i++)
        fwrite(&ds[i],sizeof(ds[i]),1,f);
    fclose(f);
}
void bosungmhvaocuoiFILE(mathang mh)
{
    FILE*f=fopen("SO_LIEU.C","ab");
    fwrite(&mh,sizeof(mh),1,f);
    fclose(f);
}
void doc(mathang ds[],int*n)
{
    FILE*f=fopen("SO_LIEU.C","rb");
    if(f==NULL)
    {
        printf("\tKhong tim thay file\n");
        return;
    }
    int i=0;
    while(1)
    {
        fread(&ds[i],sizeof(ds[i]),1,f);
        if(feof(f))
            break;
        i++;
    }
    *n=i;
    fclose(f);
}
void menu()
{
    printf("\t\t\tMENU\n");
    printf("\t1. Nhap so lieu len tep\n");
    printf("\t2. Ghi bo sung vao cuoi tep\n");
    printf("\t3. Hien thi noi dung tu tep\n");
    printf("\t0. exit\n");
    printf("\t\tVui long chon\n");
}
int main()
{
    int n=0;
    mathang ds[100];
    while(1)
    {
        menu();
        int chon; scanf("%d",&chon);
        system("cls");
        switch(chon)
        {
        case 1:
            {
                printf("\tNhap so lieu\n");
                printf("\tNhap so luong hang hoa: ");
                scanf("%d",&n);
                nhapdsmh(ds,n);
                luudslenFILE(ds,n);
                hienthidsmh(ds,n);
                break;
            }
        case 2:
            {
                mathang mh=nhapmathang();
                bosungmhvaocuoiFILE(mh);
                printf("\t Da bo sung thanh cong\n");
                break;
            }
        case 3:
            {
                printf("\tHien thi noi dung tu tep\n");
                doc(ds,&n);
                hienthidsmh(ds,n);
                break;
            }
        case 0:
            {
                printf("\texit\n");
                return;
            }
        default:
            printf("\tNhap tu 0-3\n");
        }
        printf("\tNhan phim bat ki de tro ve menu\n");
        getch(); system("cls");
    }
}
