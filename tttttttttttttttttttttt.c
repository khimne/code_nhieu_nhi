#include<stdio.h>
#include<math.h>
#define MAX 100
/* hàm nhập các phần tử trong mảng */
void nhap (int a[], int n)
{
  //sử dụng vòng lặp do..while để yêu cầu người dùng nhập vào số lương phần tử trong mảng
    do
    {
        printf("\nNhập số phần tử trong mảng: ");
        scanf("%d", &n);
        //nếu người dùng nhập vào số lượng <= 0 hoặc > MAX thì yêu cầu nhập lại
        if(n <= 0 || n > MAX)
        {
            printf("\nSố phần tử không hợp lệ, vui lòng nhập lại !");
        }
    }while(n <= 0 || n > MAX);
    //sử dụng vòng lặp for để nhập giá trị cho từng phần tử trong mảng
    for(int i = 0; i < n; i++)
    {
        printf("\nNhập a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
/* hàm xuất các phần tử trong mảng */
void xuat(int a[], int n)
{
  //sử dụng vòng lặp for lặp từ đầu mảng đến cuối mảng, cứ mỗi vòng lặp ta in phần tử đó ra màn hình
    printf("Các phần tử trong mảng: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}
/* hàm kiếm tra số nguyên tố */
bool KiemTraNguyenTo(int n)
{
  //nếu n < 2 thì không phải là số nguyên tố
    if (n < 2)
    {
        return false;
    }
    //nếu n > 2 thì ta tiếp tục xét
    else if (n > 2)
    {
      //nếu n % 2 == 0 thì không phải là số nguyên tố
        if (n % 2 == 0)
        {
            return false;
        }
        //ta sử dụng vòng lặp for lặp từ 3 đến căn bậc hai của n, với bước nhảy += 2
        for (int i = 3; i <= sqrt((float)n); i += 2)
        {
          //nếu n chia hết cho i thì không phải là số nguyên tố
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    //còn lại là số nguyên tố
    return true;
}
/* hàm đếm số nguyên tố trong mảng */
int demnguyento(int a[], int n)
{
    int dem = 0;
    //ta sử dụng vòng lặp for để duyệt từng phần tử trong mảng
    //cứ mỗi vòng lặp ta gọi hàm KiemTraNguyenTo() để kiểm tra phần tử đó, nếu phải thì biến dem++
    for(int i = 0; i < n; i++)
    {
        if(KiemTraNguyenTo(a[i]) == true && a[i] < 100)
        {
            dem++;
        }
    }
    //sau khi kết thúc vòng lặp thì ta return dem (số phần tử trong mảng là số nguyên tố)
    return dem;
}
int main()
{
    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);
    int dem = demnguyento(a, n);
    printf("\nSố lượng số nguyên tố trong mảng: %d", dem);
}
