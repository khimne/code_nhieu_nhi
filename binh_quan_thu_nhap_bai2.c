//IN: năm, GDP , tốc độ tăng  trưởng kinh tế: x
//OUT: thu nhập bình quân các năm cho đến khi nào GDP năm đó >=2 năm 2014

int main()
{
    int y=0;
    double x,gdp;
    scanf("%d%lf%lf",&y,&gdp,&x);
    printf("%10s%10s\n","NAM","GDP");
    double k=gdp;
    while(k*2>gdp){
        printf("%10d%10.2lf\n",y,gdp);
        y++;
        gdp=gdp+gdp*x/100;
        if(gdp>(2*k)){
            printf("%10d%10.2lf\n", y, gdp);
            break;
            }
        }
    return 0;
}
