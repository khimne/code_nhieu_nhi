 #include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct note{
    int data;
    struct node*next;
}node;
node*first=NULL;

int themDataNode()
{
    int n; scanf("%d",&n);
    return n;
}

node* taoNode()
{
    //Cấp phát động tạo ra 1 ô nhớ chưa data và next
    node*pnode=(node*)malloc(sizeof(node));
    //Truyền data vào ô nhớ đó (cấp giá trị)
    pnode->data=themDataNode();
    //Trỏ con trỏ vào phần tử tiếp theo
    pnode->next=NULL;
    return pnode;
}
//Cách 1 là cho hết vào void
void themNodeODau()
{
    //tạo node
    node*pnode=taoNode();
    //Nếu danh sách chưa có pt nào
    if(first==NULL)
    {
        first=pnode;
    }
    //Nếu ds đã có pt
    else
        //cho node vừa tạo trỏ đến sau phần tử đầu tiên(lúc này pt đầu tiên sẽ là pt tiếp theo)
        //phần tử đầu tiên bg sẽ có giá trị = node vừa tạo
    {
        pnode->next=first;
        first=pnode;
    }
}
void themNodeOCuoi()
{
    //tọo node
    node*pnode=taoNode();
    //Nếu ds rỗng
    if(first==NULL)
    {
        first=pnode;
    }
    //ds đã có pt
    else
    {
        //Tìm được ptu cuối cùng bằng for chạy từ phần tử đầu tiên đến ptu cuối cùng
        //Tìm thấy rồi thì cho phần tử cuối đấy trỏ đến sau ptu vừa tạo
        //Ptu cuối cùng có gtri = node vừa tạo

    node*tmp;
    for(tmp=first;tmp->next!=NULL;tmp=tmp->next)
        tmp->next=pnode;
        tmp=pnode;
    }
}

//Tìm node có phần data = d
//Giả về địa chỉ node đó nếu thấy
//Giả về NULL nếu không thấy

node *timNode(int x)
{
    node*i;
    for (i=first;i!=NULL;i=i->next)
        if(i->data==x)
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

//Khó hiểu này
void xoaNode( node*qnode)
{
    if(qnode==NULL)
        return ;
    if(first==qnode)
        {
        first=first->next;
        free(qnode);
        }
    else
    {
        node*i=NULL;
        for (i=first;i->next!=qnode;i=i->next)
        i->next = qnode->next;
        free(qnode);
    }
}
void xoaNodeTheoData(int d)
{
    //trong khi dữ liệu d vẫn có trong danh sách
    while (1)
    {
        //Tìm node chứa dữ liệu d đó
        node* qNode = timNode(d);
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

void inDanhSach()
{
    for (node* i = first; i!=NULL; i=i->next)
        printf("%d ",i->data);
    printf("\n");
}
int main()
{
    themNodeOCuoi(taoNode());
    themNodeOCuoi(taoNode());
    themNodeOCuoi(taoNode());
    themNodeOCuoi(taoNode());
    themNodeOCuoi(taoNode());
    inDanhSach();
    printf("\tNhap data can tim: ");
    int d; scanf("%d",&d);
    node* qNode = timNode(d);
    printf("\tNhap gia tri can them: ");
    node* pNode = taoNode();
    chenNodeSauNode(qNode,pNode);
    printf("\tDanh sach sau khi chen gia tri: ");
    inDanhSach();
    xoaNode(qNode);
    printf("\tDanh sach sau khi xoa qNode: ");
    inDanhSach();
    xoaDanhSach();
    printf("\tDanh sach sau khi xoa: ");
    inDanhSach();
    printf("\n");
}
