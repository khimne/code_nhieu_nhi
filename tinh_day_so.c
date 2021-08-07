#include<stdio.h>
#include<conio.h>
#include<math.h>

int GT(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return n*GT(n - 1);
}
int main()
{
    int x, n;
    float S;
    S = 0;
    do
    {
        scanf("%d %d", &n,&x);
        if(n < 1 || x<0)
        {
            printf("Error");
        }
    }while(n < 1 || x<0);

    for(int i = 0; i < n; i++)
    {
        S = S + ((pow((-1),n))*(pow(x,n)))/ GT(i6yt);
    }
    printf("%0.4f", S);
    getch();
    return 0;
}
