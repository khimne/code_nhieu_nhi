/* 1. nhập 1 chuỗi là tên bản thân, in ra file c.txt chuỗi "Xin chao" + tên vừa nhập

2. Tạo 1 file c2.txt, trong đó chứa 2 dòng

    - dòng thứ 1: Số nguyên n là giá trị nguyên dương nhập từ bàn phím
    - dòng thứ 2: n số nguyên ngẫu nhiêu trong khoảng -100 đến 100

3. Đọc từ file c2.txt 1 mảng có n phần tử là các phần tử ở dòng thứ 2, đếm các số âm và số dương trong mảng

4. Tạo file c3.txt gồm 2 mảng có định dạng :
- Dòng thứ 1: là số nguyên dương n1, là số lượng phần tử của mảng thứ 1
- Dòng thứ 2: n1 số nguyên dương đã được sắp xếp theo chiều tăng dần
- Dòng thứ 3: là số nguyên dương n2, là số lượng phần tử của mảng thứ 2
- Dòng thứ 4: n2 số nguyên đã được sắp xếp theo chiều tăng dần
Hãy đọc 2 mảng trên, ghép vào mảng thứ 3 gồm toàn các phần tử
của 2 mảng trên nhưng không trùng nhau, sau đó nối mảng thứ 3 vào cuối file c3.txt

*/
#include<stdio.h>
#include<stdlib.h>

//void ghi(){
//    FILE* f=fopen("cc.txt","w");
//    fprintf(f,"2\n99");
//    fclose(f);
//}
void doc(int *a, int *b){
    FILE* f=fopen("c2.txt","r");
    fscanf(f,"%d", a);
    fscanf(f,"\n");
    fscanf(f,"%d", b);
    fclose(f);
}
int main(){
    int* a;
    int* b;
    //ghi();
    doc(&a, &b);
    printf("%d\n%d", a,b);
}
