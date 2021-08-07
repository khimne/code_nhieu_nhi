#include<stdio.h>
#include<time.h>
#define MAX 50

//Biến cục bộ chỉ có td trong hàm đó .Biến toàn cục



//Kiểm tra 1 số có phải số NT HAY K
//iN: số Nguyên
//out:1/0( đúng hay sai)

int laSNT(int n)
{
    if (n<2)
        return 0;
    for (int i=2;i<n;i++)
        if (n%i==0)
        return 0;
    return 1;
}


int main()
{
    while(1){
    int n;
    scanf("%d",&n);
    if (laSNT(n))
        printf("la SNT\n");
    }

}
