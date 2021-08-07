#include<stdio.h>
int main (){
    int a[10],tongle=0,tongchan=0,demc=0,deml=0;
    float tbcchan, tbcle;
    for (int i=0;i<10;i++) {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i<=10; i++) {
            if(a[i]%2==0){
            tongchan = tongchan + a[i];
            demc++;
            tbcchan=tongchan/demc;
                }
        else
           {tongle = tongle + a[i];
            deml++;
            tbcle=tongle/deml;}
            }
        printf("Tong cac so chan, tong cac so le: %.2f\n %.2f", tbcchan, tbcle);
    return 0;

}
