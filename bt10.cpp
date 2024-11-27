#include<stdio.h>
int main(){
	//Nhap vao so n va in ra n so nguyen to dau tien
	//Buoc1: Khai bao va nhap gia tri cho n
	int n;
	printf("Nhap vao so n bat ki: \n");
	scanf("%d",&n);
	//Buoc2: Khoi tao bien count = 0
	int count = 0;
	int number = 2;
	//Buoc3: Xu ly tinh toan
	while(count<=n){
         int flag = 0;
         for(int i = 2; i<number; i++){
         	if(number%i==0){
         		flag=1;
         		break;
			 }
		 }
	//3.1: Khoi tao bien number = 0 va bien flag = 0
	//3.2:Su dung vong lap while de tinh ca so nguyen to tim thay 
	//3.2.1: Su dung vong lap for va menh de if de tim so nguyen to
	//Neu khong la so nguyen to thi toi se flag !=0
	//3.2.2: Su dung if de kiem tra flag
	//Neu flag == 0 thi tang bien count len 1
   if(flag==0){
   	printf("%2d",number);
	   count++;
   }
number ++;
//Buoc4: in ket qua 






}
	return 0;
}
