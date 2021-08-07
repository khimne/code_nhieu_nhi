//Mulli dimesion array
//Matrix
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#include<time.h>

void nhapMatrix (int m[][MAX],int d,int c)
{
    for(int i=0;i<d;i++)
    {
        for (int j=0;j<c;j++)
            //scanf("%d",&m[i][j]);
            //random
            m[i][j]=rand()%100;
    }
}
void inMatrix (int m[][MAX],int d,int c,int k)
{
    for (int i=0;i<d;i++)
        {
        for (int j=0;j<c;j++)
            printf("%4d",k,m[i][j]);
        printf("\n");
    }
}


void

int main ()
{
    srand(time(NULL));
    int m[MAX][MAX];  //DÒNG - CỘT
    int d,c; scanf("%d%d",&d,&c);
    nhapMatrix(m,d,c);

    inMatrix(m,d,c,10);
}

