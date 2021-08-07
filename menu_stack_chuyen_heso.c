#include<stdio.h>
#define MAX 100

int top = -1;
int uStack[MAX];
int isEmpty()
    {
        return top ==-1;
    }
int isFull()
    {
        return top==MAX-1;
    }
void push(int d)
{
    if(isFull())
        return;
        top+=1;
    uStack[top]=d;
}
int pop ()
{
    if (isEmpty())
        return -1;
    int tmp = uStack[top];
    top --;
    return tmp;
}
int peek()
{
    if(isEmpty())
        return -1;
        return uStack[top];

}
void chuyenCoSo(int n, int heSo)
{
    top=-1;
    while(n!=0)
    {
        push(n%heSo);
        n/=heSo;
    }
}
void hienThikq()
{
     while (!isEmpty())
    {
        int tmp=pop();
        if (tmp<10)
            printf("%d",tmp);
        else
            printf("%c",tmp-10+'a');
    }
}
void menu()
{
    printf("\t\tMENU\n");
    printf("\t1. Chuyen 1 so nguyen duong sang he so 2 \n");
    printf("\t2. Chuyen 1 so nguyen duong sang he so 8 \n");
    printf("\t3. Chuyen 1 so nguyen duong sang he so 16 \n");
    printf("\t4. Ket thuc  \n");
    printf("\t----------------------------\n");
    printf("\tVui long chon: ");
}
int main ()
{
    int chon;
    int n=0;
    printf("Nhap so nguyen duong: ");
    scanf("%d",&n);
    while(1)
    {
        menu();
        scanf("%d", &chon);
        switch(chon)
        {
            case 1:
                chuyenCoSo(n,2);
                printf("So %d chuyen sang he co so 2 la:\n",n);
                hienThikq();
                break;
            case 2:
                chuyenCoSo(n,8);
                printf("So %d chuyen sang he co so 8 la:\n",n);
                hienThikq();
                break;
            case 3:
                chuyenCoSo(n,16);
                printf("So %d chuyen sang he co so 16 la:\n",n);
                hienThikq();
                break;
            case 4: exit(4);
            default: printf("Vui long nhap tu 0 - 4\n ");
        }
        printf("\nBam phim bat ky de ve menu\n");
        getch();
        system("cls");
    }
    return 0;
}
