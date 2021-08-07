#include<stdio.h>
#include<math.h>
int LaUoc(int x, int n)
{
    return n%x==0;
}
void lietkeUocDuong(int n)
{

    for (int i=1; i<=abs(n); i++)
    {
        if(n%i==0)
            printf("%d",i);
    }
    printf("\n");

}
int  LaSNT(int n)
{
    if (n<2)
    {
        return 0;
    }
    for (int i=2; i<sqrt(n); i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;

}
void timSNTGanNhat(int n)
{
    int flag=0;
    int dem=1;
    while(1)
    {
        if(LaSNT(n+dem))
        {
            printf("%d ",n+dem);
            flag=1;

        }
        if (LaSNT(n-dem))
        {
            printf("%d  ",n-dem);
            flag=1;
        }
        if(flag==1)
        {
            break;
        }
        dem++;
    }


}
int main()
{
    int n;
    while(1){
    scanf("%d",&n);
    timSNTGanNhat(n);   }

}
