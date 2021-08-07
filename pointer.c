#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>

//Pointer

int main()
{

}


//Xóa 1 node theo 1 node đã có
int xoaNode (Node* delNode)
{
    if(delNode==NULL)
        return 0;
    if (delNode==first)
    {
        first = first ->next;
        free(delNode);
    }
    else
    {
        //tìm phần tử trc delNode
        Node*i=first;
        while(i->next!=delNode)
            i=i->next;
            //ĐIỀU hướng và xóa delNode
        i->next =delNode ->next;
        free(delNode);

    }
}
// xóa 1 node theo 1 gtri nhất định
void xoaNodeTheoData(int d)
{
    while(timDatatrongds(d)!=NULL)
    {
        xoaNode
    }
}
