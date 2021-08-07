#include<stdio.h>
#include<string.h>


//Định nghĩa struct sv
        // Hoten
        // Namsinh
        // Diemtb
         typedef struct {
            char hoten[20];
            int namsinh;
            float diemtb;
        }Sinhvien;
Sinhvien nhapsinhvien()
{
    Sinhvien sv;
    fflush(stdin);
    printf("\t ho ten:");
    gets(sv.hoten);
    fflush(stdin);
    printf("\t nam sinh: ");
    scanf("%d",&sv.namsinh);
    printf("\t diemtb:");
    scanf("%f",&sv.diemtb);
    return sv;
}
void inthongtinsv(Sinhvien sv)
{
    printf("\t ho ten: %s \n",sv.hoten);
    printf("\t nam sinh: %d",sv.namsinh);
    printf("\t diem tb : %f",sv.diemtb);
}
void insv1dong(Sinhvien sv)
{
    printf("%20s%11d%8.2f\n",sv.hoten,sv.namsinh,sv.diemtb);

}
void nhapDSsv(Sinhvien sv[],int n)
{
    for(int i=0;i<n;i++)
    {
        sv[i]=nhapsinhvien();
    }
}
void inDSsv(Sinhvien sv[],int n)
{
    printf("\t %4s%20s%11s%8s\n","STT","HO TEN","NAM SINH","DIEMTB");
    for(int i=0;i<n;i++)
    {
        printf("\t%4d",i+1);
        insv1dong(sv[i]);
    }
}
int themSV(Sinhvien sv[],int n,Sinhvien svien)
{
    sv[n] = svien;
    return n+1;
}
int nhapvathemsinhvien(Sinhvien sv[],int n)
{
    Sinhvien tmp= nhapsinhvien();
    n=themSV(sv,n,tmp);
    return n;
}

int main()
{
     Sinhvien sv[100];
    int n = 0;
    Sinhvien a;
    strcpy(a.hoten,"Nguyen Van A"); a.namsinh = 2000; a.diemtb = 4.5;
    Sinhvien b;
    strcpy(b.hoten,"Hoang Thi B"); b.namsinh = 2001; b.diemtb = 8.5;
    Sinhvien c;
    strcpy(c.hoten,"Luong Duc C"); c.namsinh = 2000; c.diemtb = 9.5;
    n = themSV(sv,n,a);
    n = themSV(sv,n,b);
    n = themSV(sv,n,c);
    int sl;
    printf("\tSo luong sinh vien can them: ");
    scanf("%d",&sl);
    for (int i=0; i<sl;i++)
        n = nhapvathemsinhvien(sv,n);
    inDSsv(sv,n);

}
