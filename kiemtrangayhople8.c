//Nhap ngay thang nam, kiem tra hop le

#include <stdio.h>

int main()
{
    int ngay, thang, nam;
    int flag = 1;           //Gia su ngay thang nam nay la hop le
    scanf("%d%d%d",&ngay,&thang,&nam);

    if (ngay < 1 || ngay > 31 || thang < 1 || thang > 12 || nam ==0)
    {
        flag = 0;
    }

    if (thang == 2)
    {
        //Kiem tra nam
        ////Neu la nam nhuan
        if (nam % 4 ==0 && nam % 100 !=0 )
        {
            if (ngay > 29)
            {
                flag = 0;
            }
        }
        ////Khong phai nam nhuan
        else
        {
            if (ngay > 28)
            {
                flag = 0;
            }

        }
    }

    if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
    {
        if (ngay > 30)
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        printf ("%d/%d/%d: hop le",ngay,thang,nam);
    }
    else
    {
        printf ("%d/%d/%d: khong hop le",ngay,thang,nam);
    }
}
