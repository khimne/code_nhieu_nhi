#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
#define FOI(i,l,r) for (int i=l; i<=r; i++)
#define FOD(i,r,l) for (int i=r; i>=l; i--)
#define NEW_LINE printf("\n");
#define LEFT_MARGIN 0
#define TOP_MARGIN 0
#define RIGHT_MARGIN c-1
#define BOT_MARGIN d-1
int getRand(int n)
{
    return rand()%(n+1);
}

void generateMatrix (int m[][MAX], int d, int c)
{
    FOI(i,0,d-1)
    {
        FOI(j,0,c-1)
        {
            m[i][j] = getRand(100);
        }
    }
}

void displayMatrix (int m[][MAX], int d, int c)
{
    FOI(i,0,d-1)
    {
        printf("\t");
        FOI(j,0,c-1)
            printf("%4d",m[i][j]);
        NEW_LINE
    }
}
void generateZigZagMatrix (int m[][MAX],int d, int c)
{
    int num = 1;
    FOI(i,TOP_MARGIN,BOT_MARGIN)
    {
        if (i%2==0)
            FOI(j,LEFT_MARGIN,RIGHT_MARGIN)
                m[i][j] = num++;
        else
            FOD(j,RIGHT_MARGIN,LEFT_MARGIN)
                m[i][j] = num++;
    }
}

void sortArrayAscending (int arr[], int n)
{
    FOI (i,0,n-2)
    {
        FOI(j, i+1, n-1)
        {
            if (arr[i]>arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

void sortZigZagMatrix (int m[][MAX], int d, int c)
{
    //Duoi ma tran thanh mang 1 chieu
    int arr[c*d];
    int k = 0;
    FOI(i,TOP_MARGIN,BOT_MARGIN)
    {
        FOI(j,LEFT_MARGIN,RIGHT_MARGIN)
        {
            arr[k] = m[i][j];
            k++;
        }
    }

    //Sap xep mang 1 chieu tang dan
    sortArrayAscending(arr,c*d);

    //Gan mang 1 chieu ve ma tran ban dau
    int num = 0;
    FOI(i,TOP_MARGIN,BOT_MARGIN)
    {
        if (i%2==0)
            FOI(j,LEFT_MARGIN,RIGHT_MARGIN)
                m[i][j] = arr[num++];
        else
            FOD(j,RIGHT_MARGIN,LEFT_MARGIN)
                m[i][j] = arr[num++];
    }

}

int main()
{
    srand(time(NULL));
    int matrix[MAX][MAX];
    int c, d;
    printf("\tNhap so dong: "); scanf("%d",&d);
    printf("\tNhap so cot: "); scanf("%d",&c);
    generateMatrix(matrix,d,c);
    printf("\tMa tran vua sinh"); NEW_LINE
    displayMatrix(matrix,d,c);
    sortZigZagMatrix(matrix,d,c);
    printf("\tMa tran sau khi sap xep zigzag");
    NEW_LINE
    displayMatrix(matrix,d,c);
}
