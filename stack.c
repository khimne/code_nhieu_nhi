 #include<stdio.h>
#define MAX 100
//stack --- cấu trúc dữ liệu ngăn xếp
//first in last out
// vào cuối cùng --> ra đầu tiên


    int top = -1;     // chỉ số của ptu trên cùng
    int uStack[MAX];
     // kiểm tra xem ngăn xếp có rỗng hay k
    int isEmpty()
    {
        return top ==-1;
    }
    int isFull()
//Kiểm ttra xem ngăn xếp đã đầy hay chưa
{
    return top==MAX-1;
}
// thêm 1 phần tử vào ngăn xếp
void push(int d)
{
    if(isFull())
        return;
        top+=1;
    uStack[top]=d;
}

//Lấy 1 phần tử ở trên cùng rồi in ra xuống dần hay in ra từng phần tử
int pop ()
{
    if (isEmpty())
        return -1;
    int tmp = uStack[top];
    top --;
    return tmp;
}

//Xem giá trị của phần tử trên cùng
int peek()
{
    if(isEmpty())
        return -1;
        return uStack[top];

}


void chuyenCoSo(int n, int heSo)
{
    //Làm rỗng stack
    top=-1;
    //Chuyển hệ số
    while(n!=0)
    {
        push(n%heSo);    // chia giá trị n cho hệ số lấy dư
        n/=heSo;    // lấy kq vừa chia cho hệ số tiếp
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


int main ()
{
   int t; scanf("%d",&t);
    while(t--)
    {
        printf("\t Nhap so he co so 10:");
        int n; scanf("%d",&n);
        printf("\t Nhap he so can chuyen: ");
        int heSo;       scanf("%d",&heSo);
        chuyenCoSo(n,heSo);
        printf("\tSo %d o he so co %d la:",n,heSo);
        hienThikq();
        printf("\n");
    }

}

//isEmpty;         // kiểm tra xem ngăn xếp có rỗng hay k
//isFull;          // kiểm tra xem ngắn xếp đã đầy chưa
//push;             // thêm 1 phần tử vào ngăn xếp
//pop;            //lấy 1 phần tử ra khỏi ngăn xếp
//peek;            //xem giá trị phần tử trên cùng
