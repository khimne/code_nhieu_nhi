#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 100
void doc(int mA[][MAX],int mB[][MAX],int *n, int *m )
{
    FILE*f=fopen("MA_TRAN.C","r");
    if(f==NULL)
    {
        printf("Khong tim thay FIle ");
        return ;
    }
    fscanf(f,"%d%d",n,m);
    fscanf(f,"\n");
    char tmp[100];
    fgets(tmp,30,f);
    for(int i=0;i<*n;i++)
    {
        for(int j=0;j<*m;j++)
            fscanf(f,"%d",&mA[i][j]);
            fscanf(f,"\n");
    }
    fgets(tmp,30,f);
    for(int i=0;i<*n;i++)
    {
        for(int j=0;j<*m;j++)
            fscanf(f,"%d",&mB[i][j]);
            fscanf(f,"\n");
    }
    fclose(f);
}
void congmt(int mA[][MAX],int mB[][MAX],int mC[][MAX],int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            mC[i][j]=mA[i][j]+mB[i][j];
    }
}
void ghimtvaocuoi(int mC[][MAX], int n,int m)
{
    FILE*f=fopen("MA_TRAN.C","a");
    fprintf(f,"MA TRAN TONG\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            fprintf(f,"%6d",mC[i][j]);
            fprintf(f,"\n");
    }
    fclose(f);
}
void hienthiMatran(int mA[][MAX],int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            printf("%6d",mA[i][j]);
            printf("\n");
    }
}
void menu()
{
    printf("\t\t\tMENU\n");
    printf("\t1. Doc mt\n");
    printf("\t2. Cong mt va ghi vao file\n");
    printf("\t3. Ket thuc\n");
    printf("\t\tVui long chon\n");
}
int main()
{
    int n,m;
    int mA[MAX][MAX], mB[MAX][MAX], mC[MAX][MAX];
    while(1)
    {
        menu();
        int chon; scanf("%d",&chon);
        system("cls");
        switch(chon)
        {
        case 1:
            {
                doc(mA,mB,&n,&m);
                printf("MA TRAN A\n");
                hienthiMatran(mA,n,m);
                printf("MA TRAN B\n");
                hienthiMatran(mB,n,m);
                break;
            }
        case 2:
            {
                congmt(mA,mB,mC,n,m);
                ghimtvaocuoi(mC,n,m);
                printf("MA TRAN TONG\n");
                hienthiMatran(mC,n,m);
                break;
            }
        case 3:
            {
                printf("\tBYE\n");
                return 0;
                break;
            }
        default:
            {
                printf("\tNhap tu 0-2\n");
            }
        }
        printf("\t Nhap phim bat ki de tro ve menu\n");
        getch(); system("cls");
    }
}
