#include <stdio.h>

//matrix

void nhapMatrix (int m[][100], int d, int c)
{
    for (int i=0; i<d; i++)
    {
        for (int j=0; j<c; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
}

void inMatrix (int m[][100], int d, int c)
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

int main()
{
    int m[100][100];
    int d, c;
    printf("\tNhap so dong: "); scanf("%d",&d);
    printf("\tNhap so cot: ");  scanf("%d",&c);
    nhapMatrix(m,d,c);

    inMatrix(m,d,c);
}
