#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (){
    int luaChon;
    do{
    printf("\n--------------MENU CHUONG TRINH----------\n");
    printf("1.Chuong trinh tinh trung binh tong cua ca so tu nhien chia het cho 2\n");
    printf("2.Chuong trinh xac dinh so nguyen to\n");
    printf("3. Chuong trinh xac dinh so chinh phuong\n");
    printf("0.Thoat chuong trinh\n");

    printf("Moi ban chon chuong trinh: ");
    scanf("%d", &luaChon);
switch(luaChon){
case 1: {

    int min, max; 
    int i=min; 
    float tong = 0, bienDem = 0, trungBinh = 0;
    
    printf("Nhap so min: \n");
    scanf("%d", &min);
    printf("Nhap so max: \n");
    scanf("%d", &max);
    for (i=min; i<=max; i++){
    if(i%2==0){
        tong +=i; 
        bienDem++;
         }
}

if (bienDem ==0){
    printf("Khong co so chia het cho 2 trong hai khoang:\n");
}else {
    trungBinh= tong/bienDem;   
printf("Trung bình tổng của các số tự nhiên chia hết cho 2 từ min tới max: %.2f ", trungBinh);
}
break;
}
case 2: {
int x; //Nhap tu ban phim 
printf("Nhap tu ban phim so x: ");
scanf("%d", &x);
int count =0;
int I;
for(I=2; I<x;I++){
    if(x%I ==0){
        count++;
 }
}
if(count==0){
    printf("X là so nguyen to");
}else {
    printf("X khong phai la so nguyen to");
}
break;
}
case 3: {
int y;//Nhap tu ban phim
printf ("Nhap tu ban phim so y: ");
scanf("%d", &y); 
int n; 
int dem=0; 
for(n=1; n<y;n++){
   if(n*n == y){
    dem=1;
   break;
   }
}
if(dem==1){
printf(" Y la so chinh phuong");
}else {
    printf(" Y khong phai la so chinh phuong");
}
break;
}
case 0: {
      printf("Thoat chuong trinh\n");
      exit(0);
      break;
    
      default:
      printf("Lua chon khong dung, moi nhap lai\n");
}
}
    }while(luaChon !=0);
return 0;
}