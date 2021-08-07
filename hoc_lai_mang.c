#include<stdio.h>
#include<stdlib.h>
#define MAX 100
//Mảng- array

void nhapmang (int a[], int n) // ( mảng và số liệu ptu)
{
    for (int i=0; i<n;i++)
        scanf("%d",a[i]);
}
void xuatmang (int a[], int n) // ( mảng và số liệu ptu)
{
    for (int i=0; i<n;i++)
        printf("%4d",a[i]);
}

int main ()
{

    int n; scanf("%d",&n);
    // <KDL> tên_mảng[tổng_số_pt];
    int arr[MAX];

    nhapmang(arr,n);
    xuatmang(arr,n);
}
// Kiểm tra xem pt có tồn tại trong mảng k?
//IN: gia tri, mảng và số lg pt
//OUT: 1/0
int laTonTai (int k, int a[], int n)
{
    for(int i=0 ; i<n)
    {
        if(a[i]==k){
            return 1;
        }

    }
}
int main ()
{

    int n=0; scanf("%d",&n);
    // <KDL> tên_mảng[tổng_số_pt];
    int arr[MAX];

    nhapmang(arr,n);
    xuatmang(arr,n);
    printf
    while(1){
            int x,scanf("")
            if (laTonTai(x,arr,n))
    }
}

//Hàm tìm gtln của mảng
//In
//Out

int getMax(int a[],int n)
{
    int i_max=0;
    for (int i=0; i<n;i++)
    {
        if (a[i_max]<a[i])
        {
            i_max=i;
        }
    }
    return a[i_max];
}

//Hàm để đếm số lần xh trong mảng
// in:
//out:

int contValue (int k, int a[], int n)
{
        int dem=0;
    for (int i=0;i<n;i++)
    {
        if(a[i]==k)
            dem++;
    }
    return dem;
}


//Hàm tìm pt xh nhiều nhất trong mảng
void Lietkeptxh (int a[],int n)
{
    int dem=0;
    for (int i=0; i<n;i++)
    {
        if(countValue(a[i],a,n)>dem_max)
            dem_max=countValue(a[i],a,n);
    }
    for (int i=0;i<n;i++)
    {
        if(countValue(a[i],a,n)==dem_max && !laTonTai(a[i],a,i))
            printf("%d",a[i]);
    }
}

2/6/2020
//Hàm tìm vị trí của 1 pt có gtnn
//Từ vị trí l đến vị trí r mảng đó
//In: mảng đó, a ,b
//OUT: min của mảng

int getMinPos(int a[],int l, int r)
{
    int minPos=l;
    for (int i=l+1;i<=r,i++)
    {
        if (a[i]<[minPos])
            min =i;
    }
    return minPos;
}
//Selection Sort - sắp xếp chọn
//In: mảng đó, số pt
//Out: k có
void selectionSortAscending( int a[], int n)
{
    for (int i=0,i<n-1;i++)
    {
        //Vị trí phần tử có gtnn
        int minPos=getMinPos(a,i,n-1)
        //Đổi vtri pt thứ i và phần tử thứ minpos có gt nhỏ nhất
        int tmp=a[i];
        a[i]=a[minPos];
        a[minPos]=tmp;
    }

}


//Kiểm tra xem 1 mảng có tăng dần hay k
int inAscending (int a[],int n)
{
    for (int i=1;i<n;i++)
    {
        if (a[i-1]>a[i])
            return 0;
    }
    return 1;
}

//Bubble Sort - sắp xếp nổi bật


void bubbleSortAscending(int a[],int n)
{
    while (!IsAscending(a,n))
    {
        for (int i=1;i<n;i++)
        {
            if (a[i-1]>a[i])
            {
                int tmp =a[i-1];
                a[i-1]=a[i];
                a[i]=tmp;
            }
        }
    }
}

//Insertion Sort - sắp xếp chọn


int main ()
{

    int n=0; scanf("%d",&n);
    // <KDL> tên_mảng[tổng_số_pt];
    int arr[MAX];

    nhapmang(arr,n);
    selectionSortAscending(a,n);
    xuatmang(arr,n);

}
