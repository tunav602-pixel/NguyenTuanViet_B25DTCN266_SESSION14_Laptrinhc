#include <stdio.h>
#include <math.h>

int kiemTra(int a){
	if(a<2)
	return 0;
	
	for (int i = 2 ; i <= sqrt(a) ; i++){
		if(a % i == 0){
			return 0 ;
		}
	}
	return 1;
}

int main( ){
	int a;
	int ketQua;
	
	printf("Nhap a:");
	scanf("%d",&a);
	
	ketQua = kiemTra(a);
	if(ketQua){
	printf("true");
}else{
	printf("false");
}
}