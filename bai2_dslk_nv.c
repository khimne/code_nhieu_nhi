#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct nhanvien
{
    char hoten[25];
    char phongban[10];
    int hesoluong;
    float thamnien;
}Data;

typedef struct node {
    Data data;
    struct node* next;

}node;

node*first=NULL;

Data themDataNode()
{
    Data a;
    printf("\n Nhap ho ten:");
    fflush(stdin);
    gets(a.hoten);
    printf("phong ban:");
    gets(a.phongban);
    fflush(stdin);
    printf("He so luong:");
    scanf("%d",&a.hesoluong);
    printf("Tham Nien:");
    scanf("%f",&a.thamnien);
    return a ;
}
node*taoNode()
{
     node*pnode=(node*)malloc(sizeof (node));
     pnode->data=themDataNode();
     pnode->next=NULL;
     return pnode;
}
node*timDatatrongds(char hoten[])
{
    node*i;
    for(i=first;i!=NULL;i=i->next)
        if(strcmp(hoten,i->data.hoten)==0)
        break;
    return i;
}
void chenNodeSauNode(node*qnode, node*pnode)
{
    pnode->next=qnode->next;
    qnode->next=pnode;
}
void taoNodesauNode(node*qnode)
{
    node*pnode=taoNode();
    chenNodeSauNode(qnode,pnode);
}
void themNodeOCuoi (){
    node*pnode=taoNode();
    if (first==NULL)
    {
        first=pnode;
    }
    else
    {
            //tim pt cuối
            node*tmp;
            for (tmp=first;tmp->next!=NULL;tmp=tmp->next);
            tmp->next=pnode;

    }
}
void hienthinv(Data nv)
{
    printf("|%-25s|%10s|%10d|%8.2f|\n",nv.hoten,nv.phongban,nv.hesoluong,nv.thamnien);
}
void hienThiDanhSach()
{
    if(first==NULL)
    {
        printf("Danh sach rong \n");
        return ;
    }
    printf("\t\tDANH SACH\n");
    printf("%-5s|%-25s|%10s|%10s|%8.2s|\n","STT","HO TEN","Phong ban","He so luong ","Tham nien");
    int stt=0;
    node*i;
    for (stt=1,i=first;i!=NULL;i=i->next)
    {
        printf("%-5d",stt++);
        hienthinv(i->data);
    }
    printf("\n");
}
void xoaNode( node*qnode)
{
    if(qnode==NULL)
        return 0 ;
    if(first==qnode)
       {
        first=first->next;
        free(qnode);
       }
    else
    {
        node*i=NULL;
        for (i=first;i->next!=qnode;i=i->next)
        i->next=qnode->next;
        free(qnode);
    }
}
void xoaNodeTheoData(char hoten[])
{
    while (1)
    {
        node* qNode = timDatatrongds(hoten);
        xoaNode(qNode);
    }
}

void inDanhSach()
{
    for (node* i = first; i!=NULL; i=i->next)
        printf("%d ",i->data);
    printf("\n");
}
int main()
{
     int n=0;
    char hoten[25];
    node* pnode=NULL;

   printf("Nhap so luong sv: ");
                    scanf("%d",&n);
                    //Nhap trung sv 1
                    for (int i=0; i<n; i++)
                    {
                        printf("\tNhap sinh vien thu: %d",i+1);
                            themNodeOCuoi();
                    }
    hienThiDanhSach();

     printf("\tNhap ten muon chen vao sau: ");
                fflush(stdin);
                gets(hoten);
                if (timDatatrongds(hoten)!=NULL)
                {
                    node* pnode = timDatatrongds(hoten);
                    taoNodesauNode(pnode);
                    printf("\tThem thanh cong\n");
                    hienThiDanhSach();
                }
                else
                {
                    printf("\tKhong tim thay sinh vien %s trong danh sach\n",hoten);
                }
        printf("\tNhap ten muon xoa: ");
                fflush(stdin);
                gets(hoten);
                if (timDatatrongds(hoten)!=NULL)
                {
                    node* pnode = timDatatrongds(hoten);
                    xoaNode(pnode);
                    printf("\tXoa thanh cong\n");
                    hienThiDanhSach();
                }
                else
                {
                    printf("\tKhong tim thay sinh vien %s trong danh sach\n",hoten);
                }
}
