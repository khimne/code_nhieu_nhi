#include <stdio.h>
#define MAX 100

void menu()
{
    printf("\t\t\tMENU\n");
    printf("\t1. Nhap n\n");
    printf("\t2. Tinh ma tran xoay\n");
    printf("\t3. Hien thi ma tran xoay\n");
    printf("\t4. Ket thuc\n");
    printf("\t\t\tVui long chon\n");
}
void tao(int a[][MAX], int n)
{
    int gt,hang,cot,vthang,vtcot;
    gt=1;
    hang=cot=n;
    vthang=vtcot=0;
    while(gt<=n*n)
    {
		int i;
        for(i=vtcot;i<cot;i++)          a[vthang][i]=gt++;
        for(i=vthang+1;i<hang;i++)      a[i][cot-1]=gt++;
        for(i=cot-2;i>=vtcot;i--)       a[hang-1][i]=gt++;
        for(i=hang-2;i>vthang;i--)      a[i][vtcot]=gt++;
        hang--; cot--; vthang++; vtcot++;
    }
}
void xuat(int a[][MAX], int n)
{
	int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%5d",a[i][j]);
    printf("\n\n\n");
    }
}
int main()
{
    int a[MAX][MAX], n;
    while(1)
    {
         menu();
        int chon; scanf("%d",&chon);
      //  system("cls");
        switch(chon)
        {
        case 1:
            printf("Nhap so nguyen duong n>0: ");
            scanf("%d",&n);
            break;
        case 2:
            tao(a,n);
            printf("Da tinh xong ma tran xoay\n");
            break;
        case 3:
        	xuat(a,n);
            break;
        case 4:
			return 0;
        default: printf("Nhap tu 0-4");
        }
        printf("Nhap phim bat ki de ve menu");
        getch();    system("cls");
    }
}
