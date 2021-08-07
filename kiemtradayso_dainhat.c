#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 100

typedef struct {
        char ht[100];
        int namsinh;
        float diemtb;
} sinhvien;

typedef struct node
{
    sinhvien dulieu;
    struct node*next;
} node;

node*first=NULL;


sinhvien nhapsinhvien()
{
    sinhvien sv;
    printf("\tHo ten: ");
    fflush(stdin);
    gets(sv.ht);

    printf("\tNam sinh: ");
    scanf("%d",&sv.namsinh);

    printf("\tDiem trung binh: ");
    scanf("%f",&sv.diemtb);

    return sv;
}

node* taoNode()
{
   //Cấp phát động tạo ô nhớ
   node*pnode=(node*)malloc(sizeof(node));
   //cấp giá trị
   pnode->dulieu=nhapsinhvien();
   //Trỏ vào phần tử tiếp theo
   pnode->next=NULL;
   return pnode;  //đã  tạo ra cái pnode
}


void themNodesauQNode(node*qnode, char ht[])
{
    node*pnode=taoNode(ht);
    pnode->next=qnode->next;
    qnode->next=pnode;
}

void themNodeOCuoi()
{
    node* pnode = taoNode();
	if (first== NULL)
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
node*timDatatrongds(char ht[])
{
    node*i;
    for(i=first;i!=NULL;i=i->next)
       if(strcmp(i->dulieu.ht,ht)==0);
        return i;
    return NULL;
}

void xoaNode(node*qnode)
{
    if(qnode==NULL)
        return 0;
    if(first==qnode)
    {
        first=first->next;
        free(qnode);
    }
    else
    {
        node*i=first;
        while(i->next!=qnode)
            i=i->next;
        i->next=qnode->next;
        free(qnode);
    }
}

void suaDataTrongds(char ht[])
{
    node*pnode=timDatatrongds(ht);
    if(pnode==NULL)
        {
        printf("\tKhong tim thay ten sv trong ds !");
        }
    else
    {
        printf("\tDa tim thay ten sv trong ds");
        pnode->dulieu=nhapsinhvien();
    }
}

void hienThiDanhSach()
{
    if(first==NULL)
    {
        printf("Danh sach rong\n");
        return;
    }
    printf("\t\t\tDANH SACH\n");
    printf("%5s|%-25s|%15s|%15s|\n","STT","HO TEN","NAM SINH","DIEM TB");
    node*i;
    int stt=0;
    for(stt=1,i=first;i!=NULL;i=i->next)
    {
        printf("%-5d|%-25s|%15d|%15.2f|\n",stt++,i->dulieu.ht,i->dulieu.namsinh,i->dulieu.diemtb);
    }
    printf("\n");
}

void menu()
{
    printf("\t\tMENU\n");
    printf("\t1. Tao danh sach sinh vien\n");
    printf("\t2. Hien thi danh sach sinh vien\n");
    printf("\t3. Chen them 1 sinh vien vao sau sinh vien\n");
    printf("\t4. Xoa 1 sinh vien\n");
    printf("\t5. Sua 1 sinh vien\n");
    printf("\t0. Exit\n");
    printf("\t\tVui long chon: \n");
}
int main()
{
    int n=0;
    char ht[25];
    node*pnode=NULL;
    while(1)
    {
        menu();
        fflush(stdin);
        int chon; scanf("%d",&chon);
        system("cls");
        switch(chon)
        {
        case 1:
                printf("Nhap so luong sinh vien: "); scanf("%d",&n);
                for(int i=0;i<n;i++)
                {
                    printf("Sinh vien thu %d\n",i+1);
                    themNodeOCuoi();
                }
                printf("Ban da nhap xong\n");
                break;
        case 2:
            hienThiDanhSach();
            break;
        case 3:
            if (first==NULL)
                {
                    printf("\tVui long nhap danh sach \n");
                    break;
                }
                printf("\tNhap ten dung truoc: ");
                fflush(stdin);
                gets(ht);
                node*qnode=timDatatrongds(ht);
                if(qnode!=NULL)
                {
                    printf("\tNhap thong tin sinh vien muon chen: ");
                    themNodesauQNode(qnode,pnode);
                    printf("\tChen xong\n");
                }
                else
                {
                    printf("\tKhong tim thay sinh vien %s trong danh sach\n",ht);
                }
                    break;
        case 4:
           if (first==NULL)
                {
                    printf("\tVui long nhap danh sach \n");
                    break;
                }
                printf("\tNhap ten muon xoa: ");
                fflush(stdin);
                gets(ht);
                node* pnode = timDatatrongds(ht);
                if (pnode!=NULL)
                {
                    xoaNode(pnode);
                    printf("\tXoa thanh cong\n");
                }
                else
                {
                    printf("\tKhong tim thay sinh vien %s trong danh sach\n",ht);
                }
                break;
        case 5:
           if(first==NULL)
            {
                    printf("Vui long nhap danh sach\n");
                break;
            }
            printf("Nhap ten sv can sua: ");
            fflush(stdin);
            gets(ht);
            suaDataTrongds(ht);
            break;
        case 0: exit(0);
        default: printf("Nhap tu 0-7\n");
        }
        printf("Nhan phim bat ki de ve menu\n");
        getch();
        system("cls");
    }
    return 0;
}
