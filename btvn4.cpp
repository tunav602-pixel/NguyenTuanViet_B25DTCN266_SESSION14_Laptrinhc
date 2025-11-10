#include <stdio.h>

void Mang(int arr[] , int n){
	for( int i = 0 ; i < n ; i++){
		printf("%5d", arr[i]);
}
}
int main ( ){
	int n;
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	int arr[100];
	
		for (int i = 0 ; i<n ; i++){
		printf("Nhap arr[%d] = ", i);
	    scanf("%d",&arr[i]);
}
           Mang(arr , n);
}
