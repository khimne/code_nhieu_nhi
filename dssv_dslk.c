//Viết chương trình ds sv.Tạo menu có các yc
//1.Nhập số lg sv
//2.Nhập ds vs
//3.in ds sv
//4.Tìm kiếm và sửa 1 sv trong ds
//5.Sắp xếp sv theo điểm
//6.Sắp xếp sv theo tên
//SV gồm: hoTen,lop,namsinh, dieTK

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct sinhvien
{
    char hoten[25];
    char lop[10];
    int namsinh;
    float diemTK;
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
    printf("lop:");
    gets(a.lop);
    fflush(stdin);
    printf("Nam sinh:");
    scanf("%d",&a.namsinh);
    printf("Diem tong ket:");
    scanf("%f",&a.diemTK);
    return a ;
}

node*taoNode()
{
     // Cap phat dong tạo ra 1 ô nhớ chứa data và next
     node*pnode=(node*)malloc(sizeof (node));

     // Cấp giá trị
     pnode->data=themDataNode();

     //Trỏ vào phần tử tiếp theo
     pnode->next=NULL;

     return pnode;
}

void themNodeODau ()
{
    //Tao node
    node*pnode=taoNode();


    //Truong hợp danh sách chưa có gì
    if (first==NULL)
    {
        first=pnode;
    }

    //Trường hợp danh sách đã có các ptu
    else
    {
        pnode->next=first;
        first=pnode;
    }
}

void themNodeOCuoi (){
    //Tao node
    node*pnode=taoNode();


    //Truong hợp danh sách chưa có gì
    if (first==NULL)
    {
        first=pnode;
    }
  //Trường hợp danh sách đã có các ptu
    else
    {
            //tim pt cuối
            node*tmp;
            for (tmp=first;tmp->next!=NULL;tmp=tmp->next);
            tmp->next=pnode;

    }
}

//Thêm 1 node có gtri d hoặc str vào sau 1 node  đã có
void themNodesauQNode(node*qnode,char hoten[])
{
    node*pnode = taoNode(hoten);
    pnode->next=qnode->next;
    qnode->next= pnode;
}
//
////Đếm Gía trị
//int demgiatri(char hoten[])
//{
//    int dem=0;
//    node*i;
//    for(i=first;i!=NULL;i=i->next)
//        if(i->data==timDatatrongds(hoten))
//            dem++;
//    return dem;
//}

//void locGiaTriTrung()
//{
//    for(node*i=first;i!=NULL;i=i->next)
//    {
//        for(node*j=i->next;j!=NULL)
//        {
//            if(j->data==i->data)
//            {
//                node*qnode=j;
//                j=j->next
//                xoaNode(qnode);
//            }
//            else
//            {
//                j=j->next;
//            }
//        }
//    }
//}

void hienthisv(Data sv)
{
    printf("|%-25s|%10s|%10d|%8.2f|\n",sv.hoten,sv.lop,sv.namsinh,sv.diemTK);

}

void hienThiDanhSach()
{
    if(first==NULL)
    {
        printf("Danh sach rong \n");
        return ;
    }
    printf("\t\tDANH SACH\n");
    printf("%-5s|%-25s|%10s|%10s|%8.2s|\n","STT","HO TEN","lOP","NAM SINH","DEM TK");
    int stt=0;
    node*i;
    for (stt=1,i=first;i!=NULL;i=i->next)
    {
        printf("%-5d",stt++);
        hienthisv(i->data);
    }
    printf("\n");
}

//Tìm kiếm 1 pt có thuộc tính hoten
//Trả về đại chỉ node đấy nếu tồn tại
//Nếu k tồn tại, trả vè NULL

node*timDatatrongds(char hoten[])
{
    node*i;
    for(i=first;i!=NULL;i=i->next)
        if(strcmp(hoten,i->data.hoten)==0)
//        break;
//    return i;
            return i;
        return NULL;
}
void suaDataTrongds(char hoten[])
{
    node*pnode=timDatatrongds(hoten);
    if(pnode==NULL)
    {
        printf("Khong co sv %s trong ds\n",hoten);
    }
    else
    {
        printf("Da tim thay sv %s, vui long sua\n",hoten);
        pnode->data=themDataNode();
    }
}

void sapxepdstheoDiem() // tăng dần
{
    node*i;     node*j;
    if(first==NULL)
        return;

    for (i=first;i->next!=NULL;i=i->next)
    {
        for(j=i->next;j=NULL;j=j->next)
        {
            if(j->data.diemTK<i->data.diemTK) // muốn giảm dần thì thay dấu < =>
            {
                Data tmp =i->data;
                i->data=j->data;
                j->data=tmp;
            }
        }
    }
}

void sapxemdstheoTen ()
{
     node*i;        node*j;
    if(first==NULL)
        return;

    for (i=first;i->next!=NULL;i=i->next)
    {
        for(j=i->next;j=NULL;j=j->next)
        {
            if(strcmp(j->data.hoten,i->data.hoten)<0) // sapxep theo tên thì dùng strcmp.Nếu gt strcmp < 0 thì đổi chỗ 2 thằng

            {
                Data tmp =i->data;
                i->data=j->data;
                j->data=tmp;
            }
        }
    }
}
//Khó hiểu này
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
    //trong khi dữ liệu d vẫn có trong danh sách
    while (1)
    {
        //Tìm node chứa dữ liệu d đó
        node* qNode = timDatatrongds(hoten);
        //Xóa node đó đi
        if(qNode==NULL)
        xoaNode(qNode);
    }
}
void xoaDanhSach ()
{
    //Trong khi danh sách chưa rỗng
    while (first!=NULL)
    {
        //Xóa node đầu tiên đi
        xoaNode(first);
    }
}

void menu()
{
    printf("\t\tMENU\n");
    printf("\t1. Nhap danh sach sinh vien \n");
    printf("\t2. In danh sach sinh vien \n");
    printf("\t3. Tim kiem sinh vien theo ten \n");
    printf("\t4. Sua sinh vien theo ten \n");
    printf("\t5. Sap xep sv theo diem \n");
    printf("\t6. Sap xep sv theo ten \n");
    printf("\t7. Xoa sinh vien ra khoi danh sach \n");
    printf("\t8. Chen sinh vien sau ten nhap tu ban phim\n");
    printf("\t0. Exit \n");
    printf("\t----------------------------\n");
    printf("\tVui long chon: ");

}

int main (){
    int chon;
    int n=0;
    char hoten[25];
    node* pnode=NULL;

    while(1)
    {
        //in menu
        menu();
        //chon option
        scanf("%d",&chon);
        //Thuc hien option
        switch(chon)
        {
            case 1:
                //Nếu đã có ds sv
                if(n>0)
                {
                    //xóa ds cũ
                    xoaDanhSach();
                }
                else
                {
                    //Nhập số lg sv
                    printf("Nhap so luong sv: ");
                    scanf("%d",&n);
                    //Nhap trung sv 1
                    for (int i=0; i<n; i++)
                    {
                        printf("\tNhap sinh vien thu: %d",i+1);
                            themNodeOCuoi();
                    }
                    printf("\t Ban da nhap xong ds sv\n");
                }
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
                printf("Nhap ten can tim kiem:");
                fflush(stdin);
                gets(hoten);
                pnode =timDatatrongds(hoten);
                if (pnode==NULL)
                {
                    printf("Khong ton tai sv %s\n",hoten);

                }
                else
                {
                    printf("Sinh vien %s co trong ds: \n",hoten);

                }
                break;
            case 4:
//                   if (first==NULL)
//                {
//                    printf("\tVui long nhap danh sach \n");
//                    break;
//                }
//                printf("Nhap ten can tim kiem:");
//                fflush(stdin);
//                gets(hoten);
//                pnode=timDatatrongds(hoten);
//                if (pnode==NULL)
//                {
//                    printf("Khong ton tai sv %s\n",hoten);
//
//                }
//                else
//                {
//                    printf("Nhap thong tin de sua sv:",hoten);
//                    pnode->data=themDataNode();
//
//                }
//                break;
            if(first==NULL)
            {
                    printf("Vui long nhap danh sach\n");
                break;
            }
            printf("Nhap ten sv can sua: ");
            fflush(stdin);
            gets(hoten);
            suaDataTrongds(hoten);
            break;

            case 5:
                   if (first==NULL)
                {
                    printf("\tVui long nhap danh sach \n");
                    break;
                }
                sapxepdstheoDiem();
                printf("\nDa sap xep theo diem tang dan\n");
                break;
            case 6:
                   if (first==NULL)
                {
                    printf("\tVui long nhap danh sach \n");
                    break;
                }
                sapxemdstheoTen();
                                printf("\nDa sap xep theo ten tang dan\n");
                break;
            case 7:
                 if (first==NULL)
                {
                    printf("\tVui long nhap danh sach \n");
                    break;
                }
                printf("\tNhap ten muon xoa: ");
                //char hoten[25];
                fflush(stdin);
                gets(hoten);
                node* pnode = timDatatrongds(hoten);
                if (pnode!=NULL)
                {
                    xoaNode(pnode);
                    printf("\tXoa thanh cong\n");
                }
                else
                {
                    printf("\tKhong tim thay sinh vien %s trong danh sach\n",hoten);
                }
                break;
            case 8:
                  if (first==NULL)
                {
                    printf("\tVui long nhap danh sach \n");
                    break;
                }
                printf("\tNhap ten dung truoc: ");
                fflush(stdin);
                gets(hoten);
                node*qnode=timDatatrongds(hoten);
                if(qnode!=NULL)
                {
                    printf("\tNhap thong tin sinh vien muon chen: ");
                   // node*pnode=taoNode();
                    themNodesauQNode(qnode,pnode);
                    printf("\tChen xong\n");
                }
                else
                {
                    printf("\tKhong tim thay sinh vien %s trong danh sach\n",hoten);
                }
                    break;
            case 0: exit(0);
            default: printf("Vui long nhap tu 0 -6\n ");
        }

        printf("Bam phim bat ky de ve menu\n");
        getch();
        system("cls");

    }
    return 0;
}
