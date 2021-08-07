#include<stdio.h>
#include<string.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 100

void hienThiDanhSach (char strArr[][MAX], int n)
{
    for (int i=0; i<n; i++)
        printf("\t%s\n",strArr[i]);
}

void toUpper (char str[])
{
    for (int i=0; i<strlen(str); i++)
    {
        if (str[i]>='a' && str[i]<='z')
            str[i] = str[i] - 'a' + 'A';
    }
}

void sapXepAlphabetTangDan (char strArr[][MAX], int n)
{
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            char strI[MAX];
            char strJ[MAX];
            strcpy(strI,strArr[i]);
            strcpy(strJ,strArr[j]);
            toUpper(strI);
            toUpper(strJ);

            if (strcmp(strI,strJ)>0)
            {
                char tmp[MAX];
                strcpy(tmp,strArr[i]);
                strcpy(strArr[i], strArr[j]);
                strcpy(strArr[j],tmp);
            }
        }
    }
}

void toChuoiHienThi(char chuoiBanDau[], char chuoiHienThi[])
{
    for (int i=0; i<strlen(chuoiBanDau); i++)
    {
        if (chuoiBanDau[i]!=' ')
            chuoiHienThi[i] = '_';
        else
            chuoiHienThi[i] = ' ';
    }
    chuoiHienThi[strlen(chuoiBanDau)] = '\0';
}

void putChuoiHienThi (char chuoiHienThi[])
{
    for (int i=0; i<strlen(chuoiHienThi); i++)
    {
        printf("%c ",chuoiHienThi[i]);
    }
    printf("\n");
}

int laKiTuTrongChuoi (char str[], char c)
{
    for (int i=0; i<strlen(str); i++)
    {
        if (str[i] == c)
        {
            return 1;
        }
    }
    return 0;
}

void tietLoKiTu(char chuoiBanDau[], char chuoiHienThi[], char c)
{
    for (int i=0; i<strlen(chuoiBanDau); i++)
    {
        if (chuoiBanDau[i] == c)
            chuoiHienThi[i] = c;
    }
}

int laThang (char chuoiBanDau[], char chuoiHienThi[])
{
    return strcmp(chuoiBanDau,chuoiHienThi) == 0;
}

int main()
{
    srand(time(NULL));
    char csdl[MAX][MAX];
    strcpy(csdl[0],"Viet Nam");
    strcpy(csdl[1],"Brazil");
    strcpy(csdl[2],"Italy");
    strcpy(csdl[3],"Cambodia");
    strcpy(csdl[4],"Thailand");
    strcpy(csdl[5],"Indonesia");
    strcpy(csdl[6],"Malaysia");
    strcpy(csdl[7],"China");
    strcpy(csdl[8],"America");
    strcpy(csdl[9],"France");
    strcpy(csdl[10],"German");
    strcpy(csdl[11],"Turkey");
    strcpy(csdl[12],"Nigeria");
    strcpy(csdl[13],"Canada");
    strcpy(csdl[14],"Mongolia");
    int i = rand()%15;

    //Sinh 1 chuỗi để đoán
    //Lấy ngẫu nhiên từ 1 mảng các chuỗi cho trước
    char chuoiBanDau[MAX];
    char chuoiHienThi[MAX];
    int life = 5;

    //Nhập chuỗi ban đầu
    strcpy(chuoiBanDau,csdl[i]);
    toUpper(chuoiBanDau);

    //Phiên ra chuỗi để hiển thị cho người chơi
    toChuoiHienThi(chuoiBanDau,chuoiHienThi);

    //Người chơi thực hiện:

    //LOOP:
    while (1)
    {
        system("cls");
        //Hiển thị ra ngoài chuỗi này nhưng toàn dấu _
        printf("\t\t");
        putChuoiHienThi(chuoiHienThi);
        printf("\tBan con %d mau\n",life);

        ////Đoán một kí tự
        char kiTuDoan;
        printf("\tHay doan ki tu: ");
        fflush(stdin);
        kiTuDoan = getchar();
        if (kiTuDoan>='a' && kiTuDoan<='z')
            kiTuDoan = kiTuDoan - 'a' + 'A';

        //Tìm vị trí của kí tự vừa đoán trong chuỗi
        int tmp = laKiTuTrongChuoi(chuoiBanDau,kiTuDoan);
        if (tmp==1)
        {
            //Hiển thị kí tự vừa đoán
            tietLoKiTu(chuoiBanDau,chuoiHienThi,kiTuDoan);
            if (laThang(chuoiBanDau,chuoiHienThi))
            {
                printf("\tBan da thang, chuoi ban da doan la: ");
                putChuoiHienThi(chuoiBanDau);
                return 0;
            }
        }
        else
        {
            life--;
            printf("\tKhong co ki tu %c\n",kiTuDoan);
            getch();
            if (life==0)
            {
                printf("\tBan da het luot doan, chuoi ban dau la: ");
                putChuoiHienThi(chuoiBanDau);
                return 0;
            }

        }
    }
}
