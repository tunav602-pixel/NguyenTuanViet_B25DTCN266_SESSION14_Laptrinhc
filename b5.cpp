#include <stdio.h>

int tich(int a){
	long long giaiThua = 1;
	for(int i = a ; i>=1 ; i--){
		giaiThua = giaiThua * i;
	}
	return giaiThua;
}

int main( ){
	int a;
	long long ketQua;
	
	printf("Nhap a:");
	scanf("%d",&a);
	ketQua = tich(a);
	printf("Gia tri cua %d! = %lld",a ,ketQua);
}