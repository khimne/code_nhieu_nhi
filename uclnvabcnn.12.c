int UCLN(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            a-=b;
        else
            b-=a;
    }
}
//BCNN(a,b) = a*b /UCLN(a,b)

int BCNN(int a,int b)
{
    int i;
   for (i=a>b?a:b;;i++)
        if (i%a==0&&i%b==0)
            break;
        return i;
}


int main()
{
    int a, b;
    printf("Nhap 2 so a va b: ");
    scanf("%d%d",&a,&b);
    printf("BCNN(%d,%d) = %d",a,b,BCNN(a,b));
}
