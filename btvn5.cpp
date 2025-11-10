#include <stdio.h>

int inMang(int arr[], int n){
	int max = arr[0];
	for(int i = 0 ; i <n ; i++){
		if(arr[i]> max){
			max = arr[i];
		}
	}
	return max;
}
int main ( ){
	int n;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i = 0 ; i <n ; i++){
		 printf("Nhap arr[%d] = ", i);
		 scanf("%d", &arr[i]);
	}
	
	int ketQua;
	ketQua  = inMang(arr, n);
	printf("Max cua mang la %d",ketQua);
}