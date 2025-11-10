#include <stdio.h>

int soHoanhao(int n){
	int tong = 0;
	
	for(int i = 1; i <= n/2; i++){ // chỉ dến n/2 vì ước của n loai n di vi den n-1 thi khong co uoc nao
        if(n % i == 0){
            tong += i; 
        }
    }
        if(tong == n){
        	return 1;
		}else{
			return 0;
		}
    }
int main( ){
	int n;
	printf("Nhap a:");
	scanf("%d",&n);
	
	if(soHoanhao(n)){
		printf("%d la so hoan hao\n", n);
    } else {
        printf("%d khong phai la so hoan hao\n", n);
    }
	}