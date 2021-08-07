#include <stdio.h>
#include <math.h>
int main (){
	int n;
	scanf("%d", &n);
	float tong = 0;
	float giaithua=1;
	float a;
	int i=1;
	while(i<=n){
		giaithua=giaithua*i;
        i++;
		a=1/giaithua;
		tong=tong+a;
	}
        printf("%.2f", tong);
	return 0;
}
