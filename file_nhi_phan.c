#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 100


// THAO TÁC với file nhị phân
int main()
{
    FILE*f=fopen("c.bin","wb");
    int n=100;
    //Xử lí file
    fwrite(&n, sizeof(n),1,f); // sizeof(n)  =  30
    //( và đối số, độ dài, số lượng , mở từ đầu );
    while(!feof(f))  // file end of file :  trong khi mà chưa kết thúc file
    {
        S
        //Đọc giá trị
        fread(&sv,sizeof(sv)


        //In ra màn hình
    }



    fclose(f);
}

//FILE Văn bản

#include<stdio.h>
#include<stdlib.h>

//FILE văn bản - FILE nhị phân
/*
    read (r)
    write   (w)
    append : nối vào cuối  (a)
    b
    +

    Đường dẫn - Filepath
    - Đường đãn tuyệt đối
    E:\main\n.txt
    Đường dẫn tương đối

*/

// nHẬP 2 số từ bàn phím, lưu vào file input.txt
//Đọc từ file input.txt, tính giá trị UCLN của 2 số này và điền vào cuối file input.txt

int main(){
    // Mở file
    //FILE*f = fopen("Đường_dẫn_tới_file","Chế_độ_làm việc")
    FILE*f = fopen("D:\\main\\n.txt","w");

    //Xử lí vs file
    //fprintf(f,"n=%d",n);
    fprintf(f,"HELLO World");
    //fscanf(f,"n=%d",&n);

    // Đóng file lại
    fclose(f);

}

// nHẬP 2 số từ bàn phím, lưu vào file input.txt
//Đọc từ file input.txt, tính giá trị UCLN của 2 số này và điền vào cuối file input.txt
#include<stdio.h>
#include<stdlib.h>

int getUCLN(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            a-=b;
        else
            b-=a;
    }
}
//sỐ BKI TRONG FILE
int main(){
    // nHẬP 2 số từ bàn phím, lưu vào file input.txt
//    int a,b;
//    scanf("%d %d",&a,&b);
//
//    ////Mở file
//    FILE*f =fopen("input.txt","w");
//
//        ////Xử lí file
//        fprintf(f,"%d %d\n",a,b);
//
//
//        ////Đóng file
//        fclose(f);

        //Đọc từ file input.txt, tính giá trị UCLN của 2 số này và điền vào cuối file input.txt
        int a,b;
        FILE*f = fopen("input.txt","r");
        if(f==NULL)
        {
            printf("Khong tim duoc file \n");
            exit(1);

        }
        fscanf(f,"%d%d",&a,&b);
        fclose(f);
        f=fopen("input.txt","a");
        fprintf(f,"%d",getUCLN(a,b));
        fclose(f);
}
// CHUỖI
int main(){
   FILE * f = fopen("input.txt","r");
   char str[100];
   if(f==NULL)
    return 1;
   // fgets(chuỗi sẽ lưu, độ dài lớn nhấy có thể đọc, đọc từ file nào);
   fgets(str,50,f);
   puts(str);

   fclose(f);
}
