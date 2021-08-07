#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 100

void nhap(int m1[][MAX],int d,int c)
{
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
}
void xuat(int m1[][MAX],int d,int c)
{
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%4d",m1[i][j]);
        }
        printf("\n");
    }
}
void tich2mt(int m1[][MAX],int m2[][MAX],int m3[][MAX],int d,int c)
{
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<c;j++)
        {
            int sum=0;
            for(int k=0;k<c;k++)
            {
                sum+=m1[i][k]*m2[k][j];
            }
            m3[i][j]=sum;
        }
    }
}
int main()
{
    int m1[MAX][MAX],m2[MAX][MAX],m3[MAX][MAX];
    int d,c,d1,c1,c2,d2;
    printf("\tNhap ma tran 1: \n");
    printf("Dong va cot cua mt 1:\n");
    scanf("%d%d",&d1,&c1);
    nhap(m1,d1,c1);
    printf("\tNhap ma tran 2: \n");
    printf("Dong va cot cua mt 2:\n");
    scanf("%d%d",&d2,&c2);
    nhap(m2,d2,c2);
    printf("\tTich 2 ma tran\n");
    tich2mt(m1,m2,m3,d1,c2);
    xuat(m3,d1,c2);
}
