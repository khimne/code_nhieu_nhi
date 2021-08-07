#include <stdio.h>
#define MAX 100

void nhapmang (int m[][MAX], int d, int c)
{
    for (int i=0; i<d; i++)
    {
        for (int j=0; j<c; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
}
void inmang (int m[][MAX], int d, int c)
{
    for (int i=0; i<d; i++)
    {
        for (int j=0; j<c; j++)
        {
            printf("%4d",m[i][j]);
        }
        printf("\n");
    }
}

// void getMax (int m[][100], int d, int c)
void max (int m[][MAX], int d, int c)
{
    float max=m[0][0];
    for (int i=0; i<d ;i++)
    {
        for (int j=0; j<c; j++)
        {

            max=m[i][j]>max?m[i][j]:max;
        }
    }
    printf("max:%0.2f",max);
}

float kiemtraSNT(int m)
{
    if(m<2)
        return 0;
    for(int i=2;i<=m/2;i++)
    {
        if(m%i==0)
           // return m;
        return 0;
    }
    return 1;
}

int demSNT(float m[][MAX],int d,int c)
{
    int dem=0;
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(kiemtraSNT(m[i][j]))
                dem++;
        }
        return dem;
    }
}

int tongSNT(int m[][MAX],int d,int c)
{
    float tong=0;
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(kiemtraSNT(m[i][j]))
                tong+=m[i][j];
        }
    }
    return tong;
}


int main()
{
    float m[MAX][MAX];
    int d, c;
    printf("\tNhap so dong: "); scanf("%d",&d);
    printf("\tNhap so cot: ");  scanf("%d",&c);
    nhapmang(m,d,c);
    inmang(m,d,c);
    max(m,d,c);
    printf("\nTong SNT %3d",tongSNT(m,d,c));
}
