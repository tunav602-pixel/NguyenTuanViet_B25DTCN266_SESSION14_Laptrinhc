#include <stdio.h>

int UCLN(int a, int b) {
    int min = (a < b) ? a : b; 
    for(int i = min; i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            return i; 
        }
    }

    return 1; 
}
int main( ) {
    int a, b;
    printf("Nhap 2 so nguyen a, b: ");
    scanf("%d %d", &a, &b);

    printf("UCLN(%d, %d) = %d\n", a, b, UCLN(a, b));

    return 0;
}
