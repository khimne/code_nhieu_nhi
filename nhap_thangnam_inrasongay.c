#include<stdio.h>
int laNhuan (int nam)
{
    if (nam%400==0 || nam%4==0 || nam%100==0)
        return 1;
    return 0;
}
int main()
{
    int nam,thang;
    printf("Nhap thang nam: ");
    scanf("%d %d",&thang,&nam);
    if(thang==2)
    {
        if(laNhuan(nam))
            printf("Thang %d nam %d co 29 ngay",thang,nam);
        else
            printf("Thang %d nam %d co 28 ngay",thang,nam);
    }
    else if(thang==1 || thang ==3 || thang ==5 || thang==7 || thang==8 ||thang==10 || thang==12)
        printf("Thang %d nam %d co 31 ngay",thang,nam);
    else if(thang==4 || thang ==6 || thang ==9 || thang==11 )
        printf("Thang %d nam %d co 30 ngay",thang,nam);
    else
        printf("Thang nhap khong hop le");
}
