// dung khai bao mang nhan 2 mtran

#include<stdio.h>
#include<windows.h>
#include <stdlib.h>
#define MAX 100

void nhapMaTran(int m1[][MAX],int d,int c)
{
    for (int i=0; i<d; i++)
    {
        for (int j = 0; j<c; j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
}
void inMaTran(int m1[][MAX],int d,int c)
{
    for (int i=0; i<d; i++)
    {
        for (int j = 0; j<c; j++)
        {
            printf("%4d",m1[i][j]);
        }
        printf("\n");
    }
}
void tichMaTran(int m1[][MAX],int m2[][MAX],int tich[][MAX],int d,int c)
{
    for (int i=0; i<d; i++)
    {
        for(int j=0; j<c; j++)
        {
            int sum = 0;
            for(int k=0; k<c; k++)
            {
                 sum+= m1[i][k] * m2[k][j];
            }
            tich[i][j] = sum;
        }
    }

}

int main()
{
      system("color 59");
  //  background-color: blue;

    int m1[MAX][MAX],m2[MAX][MAX],tich[MAX][MAX];
    int d1,c1,d2,c2,c,d;
    printf("\tNhap dong cua ma tran 1:");
    scanf("%d",&d1);
    printf("\tNhap cot cua ma tran 1:");
    scanf("%d",&c1);
    nhapMaTran(m1,d1,c1);
    inMaTran(m1,d1,c1);
//system("color 9");
    printf("\tNhap dong cua ma tran 2:");
    scanf("%d",&d2);
    printf("\tNhap cot cua ma tran 2:");
    scanf("%d",&c2);
    nhapMaTran(m2,d2,c2);
    inMaTran(m2,d2,c2);
//system("color 42");
    printf("\tTich 2 ma tran: ");
    tichMaTran(m1,m2,tich,d1,c2);
    inMaTran(tich,d1,c2);
}
