#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void menu()
{
    printf("\t\t\tMENU\n");
    printf("\t1. Tao danh sach thi sinh\n");
    printf("\t2. Hien thi danh sach thi sinh\n");
    printf("\t3. Sap xep diem thi\n");
    printf("\t4. Ket thuc\n");
}
void menucon()
{
    printf("\t1. Sap xep theo diem Toan\n");
    printf("\t2. Sap xep theo diem Ly\n");
    printf("\t3. Sap xep theo diem Anh\n");
    printf("\t4. Sap xep theo Tong Diem\n");
    printf("\t\t\tVui long chon: \n");
}
typedef struct
{
    char ht[25];
    int SBD;
    float dToan,dLy,dAnh,tong;
}thisinh;
typedef struct node
{
    thisinh dulieu;
    struct node*next;
}node;
node*first=NULL;

thisinh nhap()
{
    thisinh ts;
    printf("So bao danh: ");
    scanf("%d",&ts.SBD);
    printf("Nhap ho ten: ");
    fflush(stdin);
    gets(ts.ht);
    printf("Diem Toan: "); scanf("%f",&ts.dToan);
    printf("Diem Ly: "); scanf("%f",&ts.dLy);
    printf("Diem Anh: "); scanf("%f",&ts.dAnh);
    ts.tong=ts.dAnh+ts.dLy+ts.dToan;
    return ts;
}
node*taoNode()
{
    node*pnode=(node*)malloc(sizeof(node));
    pnode->dulieu=nhap();
    pnode->next=NULL;
    return pnode;
}
node*timDatatrongds( char ht[])
{
    node*i;
    for(i=first;i=i!=NULL;i=i->next)
        if(strcmp(ht,i->dulieu.ht)==0)
        return i;
        return NULL;
}
void themNodeOCuoi()
{
    node*pnode=taoNode();
    if(first==NULL)
    {
        first=pnode;
    }
    else
    {
        node*tmp;
        for(tmp=first;tmp->next!=NULL;tmp=tmp->next);
            tmp->next=pnode;
    }
}
void hienthi()
{
    if(first==NULL)
    {
        printf("Danh sach rong\n");
        return;
    }
    printf("\t\t\tDanh Sach\n");
    printf("%5s%5s%25s%10s%10s%10s%10s\n","STT","SBD","Ho ten","Diem Toan","Diem Ly","Diem Anh","Tong diem");
    int stt=0; node*i;
    for(stt=1,i=first;i!=NULL;i=i->next)
    {
        printf("%5d%5d%25s%10.2f%10.2f%10.2f%10.2f\n",stt++,i->dulieu.SBD,i->dulieu.ht,i->dulieu.dToan,i->dulieu.dLy,i->dulieu.dAnh,i->dulieu.tong);
    }
    printf("\n");
}
void sapxeptheoDiemTong()
{
    if(first!=NULL)
        {
            for(node*i=first;i!=NULL;i=i->next)
            {
                for(node*j=i->next;j!=NULL;j=j->next)
                {
                    if(j->dulieu.tong > i->dulieu.tong)
                    {
                        thisinh tmp = i->dulieu;
                        i->dulieu=j->dulieu;
                        j->dulieu=tmp;
                    }
                }
            }
        }
}
void sapxeptheoDiemToan()
{
    if(first!=NULL)
        {
            for(node*i=first;i!=NULL;i=i->next)
            {
                for(node*j=i->next;j!=NULL;j=j->next)
                {
                    if(j->dulieu.dToan > i->dulieu.dToan)
                    {
                        thisinh tmp = i->dulieu;
                        i->dulieu=j->dulieu;
                        j->dulieu=tmp;
                    }
                }
            }
        }
}
void sapxeptheoDiemLy()
{
    if(first!=NULL)
        {
            for(node*i=first;i!=NULL;i=i->next)
            {
                for(node*j=i->next;j!=NULL;j=j->next)
                {
                    if(j->dulieu.dLy > i->dulieu.dLy)
                    {
                        thisinh tmp = i->dulieu;
                        i->dulieu=j->dulieu;
                        j->dulieu=tmp;
                    }
                }
            }
        }
}
void sapxeptheoDiemAnh()
{
    if(first!=NULL)
        {
            for(node*i=first;i!=NULL;i=i->next)
            {
                for(node*j=i->next;j!=NULL;j=j->next)
                {
                    if(j->dulieu.dAnh > i->dulieu.dAnh)
                    {
                        thisinh tmp = i->dulieu;
                        i->dulieu=j->dulieu;
                        j->dulieu=tmp;
                    }
                }
            }
        }
}
int main()
{
    char ht[25];
    int n=0;
    while(1)
    {
        menu();
        int chon; scanf("%d",&chon);
        system("cls");
        switch(chon)
        {
        case 1:
            printf("Nhap so luong thi sinh: "); scanf("%d",&n);
            for(int i=0;i<n;i++)
            {
                themNodeOCuoi();
            }
            printf("Nhap xong\n");
            break;
        case 2:
            hienthi();
            break;
        case 3:
            menucon();
            int chon; scanf("%d",&chon);
            switch(chon)
            {
                case 1: sapxeptheoDiemToan();
                printf("Da sap xep xong\n");
                hienthi();
                break;
                case 2: sapxeptheoDiemLy();
                printf("Da sap xep xong\n");
                hienthi();
                break;
                case 3: sapxeptheoDiemAnh();
                 printf("Da sap xep xong\n");
                hienthi();
                break;
                case 4: sapxeptheoDiemTong();
                 printf("Da sap xep xong\n");
                hienthi();
                break;
                default: printf("Nhap tu 1-4\n");

            }
            break;
        case 4: printf("\tKet thuc\n");
        return 0;
        default: printf("Nhap tu 1-4\n");

        }
        printf("Bam nut bat ki de ve menu\n");
        getch();
        system("cls");
    }
}
