#include<stdio.h>
#include<stdlib.h>
#define MAX 100
#include<time.h>

int nhapmang(int a[])
{
    int i = 0;
    while (1)
    {
        scanf("%d", &a[i]);
        if (a[i] == 0)
        {
            i++;
            break;
        }
        i++;
    }
    return i;
}

void inmang(int a[], int n)
{
     for (int i=0; i<n;i++)
        printf("%5d",a[i]);
        printf("\n");
}

//Insertion Sort
void insertionSortGiam(int a[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
   {
       key = a[i];
       j = i-1;
       while (j >= 0 && a[j] < key)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = key;
   }
}
int main()
{
    int a[MAX];
    int n;
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++)
    {
        n = nhapmang(a);
        printf("Testcase %02d: n = %d\n",i,n);
        printf("Orig:"); inmang(a,n);
        insertionSortGiam(a,n);
        printf("Sort:");  inmang(a,n);
        printf("\n");
    }
}
