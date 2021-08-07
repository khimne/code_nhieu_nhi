#include<stdio.h>
#include<stdlib.h>


typedef  int Data; // neu la sv thi typedef struc sinhvien {hoten.....} sinhvien;


typedef struct node {
    Data data;
    struct node* next;
}node;

node*first=NULL;

Data themDataNode()
{
    Data a;
    scanf("%d",&a);
    return a ;
}

node*taoNode()
{
     // Cap phát động tạo ra 1 ô nhớ chứa data và next
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

void hienThiDanhSach()
{
    node*i;
    for (i=first;i!=NULL;i=i->next)
    {
        printf("%4d",i->data);
    }
    printf("\n");
}

//Tìm kiếm 1 pt có data x
//Trả về đia chỉ node đấy nếu tồn tại
//Nếu k tồn tại, trả vè NULL

node*timDatatrongds(Data x)
{
    node*i;
    for(i=first;i!=NULL;i=i->next)
        if(i->data==x)
        break;
    return i;
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
void xoaNodeTheoData(int d)
{
    //trong khi dữ liệu d vẫn có trong danh sách
    while (1)
    {
        //Tìm node chứa dữ liệu d đó
        node* qNode = timDatatrongds(d);
        if(qNode==NULL)
            break;
        //Xóa node đó đi
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


int main (){
    themNodeOCuoi();
    themNodeOCuoi();
    themNodeOCuoi();
    hienThiDanhSach();
    int d;
    scanf("%d",&d);
    xoaNodeTheoData(d);
    themNodeOCuoi();
    hienThiDanhSach();

}


